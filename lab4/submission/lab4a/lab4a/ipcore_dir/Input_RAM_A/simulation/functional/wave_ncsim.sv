

 
 
 




window new WaveWindow  -name  "Waves for BMG Example Design"
waveform  using  "Waves for BMG Example Design"

      waveform add -signals /Input_RAM_A_tb/status
      waveform add -signals /Input_RAM_A_tb/Input_RAM_A_synth_inst/bmg_port/CLKA
      waveform add -signals /Input_RAM_A_tb/Input_RAM_A_synth_inst/bmg_port/ADDRA
      waveform add -signals /Input_RAM_A_tb/Input_RAM_A_synth_inst/bmg_port/DINA
      waveform add -signals /Input_RAM_A_tb/Input_RAM_A_synth_inst/bmg_port/WEA
      waveform add -signals /Input_RAM_A_tb/Input_RAM_A_synth_inst/bmg_port/ENA
      waveform add -signals /Input_RAM_A_tb/Input_RAM_A_synth_inst/bmg_port/DOUTA

console submit -using simulator -wait no "run"
