-------------------------------------------------------------------------------
-- nf10_axis_sim_stim_4_wrapper.vhd
-------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

library UNISIM;
use UNISIM.VCOMPONENTS.ALL;

library nf10_axis_sim_pkg_v1_00_a;
use nf10_axis_sim_pkg_v1_00_a.all;

library nf10_axis_sim_stim_v1_00_a;
use nf10_axis_sim_stim_v1_00_a.all;

entity nf10_axis_sim_stim_4_wrapper is
  port (
    aclk : in std_logic;
    aresetn : in std_logic;
    m_axis_tdata : out std_logic_vector(63 downto 0);
    m_axis_tstrb : out std_logic_vector(7 downto 0);
    m_axis_tuser : out std_logic_vector(127 downto 0);
    m_axis_tvalid : out std_logic;
    m_axis_tready : in std_logic;
    m_axis_tlast : out std_logic
  );
end nf10_axis_sim_stim_4_wrapper;

architecture STRUCTURE of nf10_axis_sim_stim_4_wrapper is

  component nf10_axis_sim_stim is
    generic (
      C_M_AXIS_DATA_WIDTH : INTEGER;
      C_M_AXIS_TUSER_WIDTH : INTEGER;
      input_file : STRING
    );
    port (
      aclk : in std_logic;
      aresetn : in std_logic;
      m_axis_tdata : out std_logic_vector(C_M_AXIS_DATA_WIDTH-1 downto 0);
      m_axis_tstrb : out std_logic_vector((C_M_AXIS_DATA_WIDTH/8)-1 downto 0);
      m_axis_tuser : out std_logic_vector(C_M_AXIS_TUSER_WIDTH-1 downto 0);
      m_axis_tvalid : out std_logic;
      m_axis_tready : in std_logic;
      m_axis_tlast : out std_logic
    );
  end component;

begin

  nf10_axis_sim_stim_4 : nf10_axis_sim_stim
    generic map (
      C_M_AXIS_DATA_WIDTH => 64,
      C_M_AXIS_TUSER_WIDTH => 128,
      input_file => "../../stream_data_in_4.axi"
    )
    port map (
      aclk => aclk,
      aresetn => aresetn,
      m_axis_tdata => m_axis_tdata,
      m_axis_tstrb => m_axis_tstrb,
      m_axis_tuser => m_axis_tuser,
      m_axis_tvalid => m_axis_tvalid,
      m_axis_tready => m_axis_tready,
      m_axis_tlast => m_axis_tlast
    );

end architecture STRUCTURE;

