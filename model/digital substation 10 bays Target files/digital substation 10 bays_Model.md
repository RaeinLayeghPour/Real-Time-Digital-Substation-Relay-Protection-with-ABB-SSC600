Model digital substation 10 bays


REM *****************************************:


REM * Common entries:


REM *****************************************:


REM Setting the simulation time step...
rtds_write 0x00000000 0x00000640


REM External SFP Link
rtds_write 0x00000007 0x00000000


REM Fast SFP Send


REM Converter solvers setup


REM Reset analog and digital outputs on simulation stop
rtds_write 0x00C00700 0x00000001
rtds_write 0x00F00000 0x00000001


REM Module block enable
rtds_write 0x00000003 0x01010000


REM LUT solver inputs...
rtds_write 0x01000000 0x00000002
rtds_write 0x01000200 0x0000083D
rtds_write 0x01000300 434.5510172209023
rtds_write 0x01000400 0.5741558300694707
rtds_write 0x01000600 498.0
rtds_file_write 0x01200000 nlin_ind_Tr1.tr1.Lm_nonlin.txt
rtds_write 0x01000100 0x00000001
rtds_write 0x01000201 0x0000083F
rtds_write 0x01000301 434.5510172209023
rtds_write 0x01000401 0.5741558300694707
rtds_write 0x01000601 498.0
rtds_file_write 0x01200200 nlin_ind_Tr1.tr2.Lm_nonlin.txt
rtds_write 0x01000101 0x00000001
rtds_write 0x01000202 0x00000841
rtds_write 0x01000302 434.5510172209023
rtds_write 0x01000402 0.5741558300694707
rtds_write 0x01000602 498.0
rtds_file_write 0x01200400 nlin_ind_Tr1.tr3.Lm_nonlin.txt
rtds_write 0x01000102 0x00000001


REM HSSL configuration files...
rtds_file_write 0x01C40000 hssl_tx_config.txt
rtds_file_write 0x01C80000 hssl_rx_config.txt


REM Parallel DTV configuration...
rtds_write 0x02400000 0x00000000
rtds_write 0x02400020 0x00000000
rtds_write 0x02400040 0x00000000


REM *****************************************:


REM * SPC0 entries:


REM *****************************************:


REM SPC0 Topology Selector (TS) initialization...
rtds_file_write 0x08180000 SPC0_red_table.txt
rtds_write 0x08100020 0x00000001
rtds_write 0x08100021 0x00000000
rtds_write 0x08100023 0x00000000
rtds_write 0x08100024 0x00000000
rtds_write 0x08100025 0x00000000
rtds_write 0x08100026 0x00000000
rtds_write 0x08100027 0x00000000
rtds_write 0x0810002E 0x00000000
rtds_write 0x0810002F 0x00000000
rtds_write 0x08100030 0x00000000
rtds_write 0x08100031 0x00000000
rtds_write 0x08100032 0x00000000
rtds_write 0x08100033 0x00000000
rtds_write 0x08100034 0x00000000
rtds_write 0x08100035 0x00000000
rtds_write 0x08100036 0x00000000
rtds_write 0x08100037 0x00000000
rtds_write 0x08100038 0x00000000
rtds_write 0x08100039 0x00000000
rtds_file_write 0x08140000 trivial_imem.txt
rtds_file_write 0x08142000 trivial_lut.txt
rtds_write 0x08100040 0x00000001
rtds_write 0x08100041 0x00000000
rtds_write 0x08100043 0x00000000
rtds_write 0x08100044 0x00000000
rtds_write 0x08100045 0x00000000
rtds_write 0x08100046 0x00000000
rtds_write 0x08100047 0x00000000
rtds_write 0x0810004E 0x00000000
rtds_write 0x0810004F 0x00000000
rtds_write 0x08100050 0x00000000
rtds_write 0x08100051 0x00000000
rtds_write 0x08100052 0x00000000
rtds_write 0x08100053 0x00000000
rtds_write 0x08100054 0x00000000
rtds_write 0x08100055 0x00000000
rtds_write 0x08100056 0x00000000
rtds_write 0x08100057 0x00000000
rtds_write 0x08100058 0x00000000
rtds_write 0x08100059 0x00000000
rtds_file_write 0x08148000 trivial_imem.txt
rtds_file_write 0x0814A000 trivial_lut.txt
rtds_write 0x08100060 0x00000001
rtds_write 0x08100061 0x00000000
rtds_write 0x08100063 0x00000000
rtds_write 0x08100064 0x00000000
rtds_write 0x08100065 0x00000000
rtds_write 0x08100066 0x00000000
rtds_write 0x08100067 0x00000000
rtds_write 0x0810006E 0x00000000
rtds_write 0x0810006F 0x00000000
rtds_write 0x08100070 0x00000000
rtds_write 0x08100071 0x00000000
rtds_write 0x08100072 0x00000000
rtds_write 0x08100073 0x00000000
rtds_write 0x08100074 0x00000000
rtds_write 0x08100075 0x00000000
rtds_write 0x08100076 0x00000000
rtds_write 0x08100077 0x00000000
rtds_write 0x08100078 0x00000000
rtds_write 0x08100079 0x00000000
rtds_file_write 0x08150000 trivial_imem.txt
rtds_file_write 0x08152000 trivial_lut.txt


REM SPC0 Variable Delay initialization...
rtds_write 0x08100001 0x0


REM SPC0 Output voltage compare mode...
rtds_write 0x08100005 0x00000000
rtds_write 0x08100006 0x00000000


REM SPC0 Matrix multiplier initialization...
rtds_file_write 0x08000000 SPC0_Com_Word.txt
rtds_file_write 0x08020000 SPC0_Com_LUT.txt
rtds_file_write 0x08080000 SPC0_MAC0.txt
rtds_file_write 0x08082000 SPC0_MAC1.txt
rtds_file_write 0x08084000 SPC0_MAC2.txt
rtds_file_write 0x08086000 SPC0_MAC3.txt
rtds_write 0x08100004 0x00000007


REM SPC0 Contactors initialization...
rtds_write 0x08240000 0x00000000
rtds_write 0x08240080 0x00000000
rtds_write 0x08240100 0x00000000
rtds_write 0x08240180 0x00000000
rtds_write 0x08240200 0x00000000
rtds_write 0x08240280 0x00000000
rtds_write 0x08240300 0x00000001
rtds_write 0x08240380 0x00000044
rtds_write 0x08240400 0x00000001
rtds_write 0x08240001 0x00000000
rtds_write 0x08240081 0x00000000
rtds_write 0x08240101 0x00000000
rtds_write 0x08240181 0x00000000
rtds_write 0x08240201 0x00000000
rtds_write 0x08240281 0x00000000
rtds_write 0x08240301 0x00000001
rtds_write 0x08240381 0x00000045
rtds_write 0x08240401 0x00000001
rtds_write 0x08240002 0x00000000
rtds_write 0x08240082 0x00000000
rtds_write 0x08240102 0x00000000
rtds_write 0x08240182 0x00000000
rtds_write 0x08240202 0x00000000
rtds_write 0x08240282 0x00000000
rtds_write 0x08240302 0x00000001
rtds_write 0x08240382 0x00000046
rtds_write 0x08240402 0x00000001


REM SPC0 GDS compensation settings...
rtds_write 0x080C0000 0x00000000
rtds_write 0x080C0001 0x00000000
rtds_write 0x080C0004 0x00000000
rtds_write 0x080C0005 0x00000000
rtds_write 0x08100000 0x00000000
rtds_write 0x08100007 0x00000000


REM SPC0 FSM digital input pin assignments...


REM SPC0 Comparators initialization...


REM SPC0 DTSM initialization...
rtds_write 0x08280000 0x00000000
rtds_write 0x08280080 0x00000001
rtds_write 0x08280180 0x00000000
rtds_write 0x08280200 0x00000000
rtds_write 0x08280280 0x00000001
rtds_write 0x08280300 0x00000000
rtds_write 0x08280001 0x00000000
rtds_write 0x08280081 0x00000001
rtds_write 0x08280181 0x00000000
rtds_write 0x08280201 0x00000000
rtds_write 0x08280281 0x00000001
rtds_write 0x08280301 0x00000000
rtds_write 0x08280002 0x00000000
rtds_write 0x08280082 0x00000001
rtds_write 0x08280182 0x00000000
rtds_write 0x08280202 0x00000000
rtds_write 0x08280282 0x00000001
rtds_write 0x08280302 0x00000000
rtds_write 0x08280003 0x00000000
rtds_write 0x08280083 0x00000001
rtds_write 0x08280183 0x00000000
rtds_write 0x08280203 0x00000000
rtds_write 0x08280283 0x00000001
rtds_write 0x08280303 0x00000000
rtds_write 0x08280004 0x00000000
rtds_write 0x08280084 0x00000001
rtds_write 0x08280184 0x00000000
rtds_write 0x08280204 0x00000000
rtds_write 0x08280284 0x00000001
rtds_write 0x08280304 0x00000000
rtds_write 0x08280005 0x00000000
rtds_write 0x08280085 0x00000001
rtds_write 0x08280185 0x00000000
rtds_write 0x08280205 0x00000000
rtds_write 0x08280285 0x00000001
rtds_write 0x08280305 0x00000000
rtds_write 0x08280006 0x00000000
rtds_write 0x08280086 0x00000001
rtds_write 0x08280186 0x00000000
rtds_write 0x08280206 0x00000000
rtds_write 0x08280286 0x00000001
rtds_write 0x08280306 0x00000000


REM SPC0 Time Varying Elements initialization...


REM *****************************************:


REM * SPC1 entries:


REM *****************************************:


REM SPC1 Topology Selector (TS) initialization...
rtds_file_write 0x08580000 SPC1_red_table.txt
rtds_write 0x08500020 0x00000001
rtds_write 0x08500021 0x00000000
rtds_write 0x08500023 0x00000000
rtds_write 0x08500024 0x00000000
rtds_write 0x08500025 0x00000000
rtds_write 0x08500026 0x00000000
rtds_write 0x08500027 0x00000000
rtds_write 0x0850002E 0x00000000
rtds_write 0x0850002F 0x00000000
rtds_write 0x08500030 0x00000000
rtds_write 0x08500031 0x00000000
rtds_write 0x08500032 0x00000000
rtds_write 0x08500033 0x00000000
rtds_write 0x08500034 0x00000000
rtds_write 0x08500035 0x00000000
rtds_write 0x08500036 0x00000000
rtds_write 0x08500037 0x00000000
rtds_write 0x08500038 0x00000000
rtds_write 0x08500039 0x00000000
rtds_file_write 0x08540000 trivial_imem.txt
rtds_file_write 0x08542000 trivial_lut.txt
rtds_write 0x08500040 0x00000001
rtds_write 0x08500041 0x00000000
rtds_write 0x08500043 0x00000000
rtds_write 0x08500044 0x00000000
rtds_write 0x08500045 0x00000000
rtds_write 0x08500046 0x00000000
rtds_write 0x08500047 0x00000000
rtds_write 0x0850004E 0x00000000
rtds_write 0x0850004F 0x00000000
rtds_write 0x08500050 0x00000000
rtds_write 0x08500051 0x00000000
rtds_write 0x08500052 0x00000000
rtds_write 0x08500053 0x00000000
rtds_write 0x08500054 0x00000000
rtds_write 0x08500055 0x00000000
rtds_write 0x08500056 0x00000000
rtds_write 0x08500057 0x00000000
rtds_write 0x08500058 0x00000000
rtds_write 0x08500059 0x00000000
rtds_file_write 0x08548000 trivial_imem.txt
rtds_file_write 0x0854A000 trivial_lut.txt
rtds_write 0x08500060 0x00000001
rtds_write 0x08500061 0x00000000
rtds_write 0x08500063 0x00000000
rtds_write 0x08500064 0x00000000
rtds_write 0x08500065 0x00000000
rtds_write 0x08500066 0x00000000
rtds_write 0x08500067 0x00000000
rtds_write 0x0850006E 0x00000000
rtds_write 0x0850006F 0x00000000
rtds_write 0x08500070 0x00000000
rtds_write 0x08500071 0x00000000
rtds_write 0x08500072 0x00000000
rtds_write 0x08500073 0x00000000
rtds_write 0x08500074 0x00000000
rtds_write 0x08500075 0x00000000
rtds_write 0x08500076 0x00000000
rtds_write 0x08500077 0x00000000
rtds_write 0x08500078 0x00000000
rtds_write 0x08500079 0x00000000
rtds_file_write 0x08550000 trivial_imem.txt
rtds_file_write 0x08552000 trivial_lut.txt


REM SPC1 Variable Delay initialization...
rtds_write 0x08500001 0x0


REM SPC1 Output voltage compare mode...
rtds_write 0x08500005 0x00000000
rtds_write 0x08500006 0x00000000


REM SPC1 Matrix multiplier initialization...
rtds_file_write 0x08400000 SPC1_Com_Word.txt
rtds_file_write 0x08420000 SPC1_Com_LUT.txt
rtds_file_write 0x08480000 SPC1_MAC0.txt
rtds_file_write 0x08482000 SPC1_MAC1.txt
rtds_file_write 0x08484000 SPC1_MAC2.txt
rtds_file_write 0x08486000 SPC1_MAC3.txt
rtds_write 0x08500004 0x00000000


REM SPC1 Contactors initialization...


REM SPC1 GDS compensation settings...
rtds_write 0x084C0000 0x00000000
rtds_write 0x084C0001 0x00000000
rtds_write 0x084C0004 0x00000000
rtds_write 0x084C0005 0x00000000
rtds_write 0x08500000 0x00000000
rtds_write 0x08500007 0x00000000


REM SPC1 FSM digital input pin assignments...


REM SPC1 Comparators initialization...


REM SPC1 DTSM initialization...
rtds_write 0x08680000 0x00000000
rtds_write 0x08680080 0x00000001
rtds_write 0x08680180 0x00000000
rtds_write 0x08680200 0x00000000
rtds_write 0x08680280 0x00000001
rtds_write 0x08680300 0x00000000
rtds_write 0x08680001 0x00000000
rtds_write 0x08680081 0x00000001
rtds_write 0x08680181 0x00000000
rtds_write 0x08680201 0x00000000
rtds_write 0x08680281 0x00000001
rtds_write 0x08680301 0x00000000
rtds_write 0x08680002 0x00000000
rtds_write 0x08680082 0x00000001
rtds_write 0x08680182 0x00000000
rtds_write 0x08680202 0x00000000
rtds_write 0x08680282 0x00000001
rtds_write 0x08680302 0x00000000
rtds_write 0x08680003 0x00000000
rtds_write 0x08680083 0x00000001
rtds_write 0x08680183 0x00000000
rtds_write 0x08680203 0x00000000
rtds_write 0x08680283 0x00000001
rtds_write 0x08680303 0x00000000
rtds_write 0x08680004 0x00000000
rtds_write 0x08680084 0x00000001
rtds_write 0x08680184 0x00000000
rtds_write 0x08680204 0x00000000
rtds_write 0x08680284 0x00000001
rtds_write 0x08680304 0x00000000
rtds_write 0x08680005 0x00000000
rtds_write 0x08680085 0x00000001
rtds_write 0x08680185 0x00000000
rtds_write 0x08680205 0x00000000
rtds_write 0x08680285 0x00000001
rtds_write 0x08680305 0x00000000
rtds_write 0x08680006 0x00000000
rtds_write 0x08680086 0x00000001
rtds_write 0x08680186 0x00000000
rtds_write 0x08680206 0x00000000
rtds_write 0x08680286 0x00000001
rtds_write 0x08680306 0x00000000
rtds_write 0x08680007 0x00000000
rtds_write 0x08680087 0x00000001
rtds_write 0x08680187 0x00000000
rtds_write 0x08680207 0x00000000
rtds_write 0x08680287 0x00000001
rtds_write 0x08680307 0x00000000
rtds_write 0x08680008 0x00000000
rtds_write 0x08680088 0x00000001
rtds_write 0x08680188 0x00000000
rtds_write 0x08680208 0x00000000
rtds_write 0x08680288 0x00000001
rtds_write 0x08680308 0x00000000
rtds_write 0x08680009 0x00000000
rtds_write 0x08680089 0x00000001
rtds_write 0x08680189 0x00000000
rtds_write 0x08680209 0x00000000
rtds_write 0x08680289 0x00000001
rtds_write 0x08680309 0x00000000
rtds_write 0x0868000A 0x00000000
rtds_write 0x0868008A 0x00000001
rtds_write 0x0868018A 0x00000000
rtds_write 0x0868020A 0x00000000
rtds_write 0x0868028A 0x00000001
rtds_write 0x0868030A 0x00000000
rtds_write 0x0868000B 0x00000000
rtds_write 0x0868008B 0x00000001
rtds_write 0x0868018B 0x00000000
rtds_write 0x0868020B 0x00000000
rtds_write 0x0868028B 0x00000001
rtds_write 0x0868030B 0x00000000
rtds_write 0x0868000C 0x00000000
rtds_write 0x0868008C 0x00000001
rtds_write 0x0868018C 0x00000000
rtds_write 0x0868020C 0x00000000
rtds_write 0x0868028C 0x00000001
rtds_write 0x0868030C 0x00000000
rtds_write 0x0868000D 0x00000000
rtds_write 0x0868008D 0x00000001
rtds_write 0x0868018D 0x00000000
rtds_write 0x0868020D 0x00000000
rtds_write 0x0868028D 0x00000001
rtds_write 0x0868030D 0x00000000


REM SPC1 Time Varying Elements initialization...


REM *****************************************:


REM * SPC2 entries:


REM *****************************************:


REM SPC2 Topology Selector (TS) initialization...
rtds_file_write 0x08980000 SPC2_red_table.txt
rtds_write 0x08900020 0x00000001
rtds_write 0x08900021 0x00000000
rtds_write 0x08900023 0x00000000
rtds_write 0x08900024 0x00000000
rtds_write 0x08900025 0x00000000
rtds_write 0x08900026 0x00000000
rtds_write 0x08900027 0x00000000
rtds_write 0x0890002E 0x00000000
rtds_write 0x0890002F 0x00000000
rtds_write 0x08900030 0x00000000
rtds_write 0x08900031 0x00000000
rtds_write 0x08900032 0x00000000
rtds_write 0x08900033 0x00000000
rtds_write 0x08900034 0x00000000
rtds_write 0x08900035 0x00000000
rtds_write 0x08900036 0x00000000
rtds_write 0x08900037 0x00000000
rtds_write 0x08900038 0x00000000
rtds_write 0x08900039 0x00000000
rtds_file_write 0x08940000 trivial_imem.txt
rtds_file_write 0x08942000 trivial_lut.txt
rtds_write 0x08900040 0x00000001
rtds_write 0x08900041 0x00000000
rtds_write 0x08900043 0x00000000
rtds_write 0x08900044 0x00000000
rtds_write 0x08900045 0x00000000
rtds_write 0x08900046 0x00000000
rtds_write 0x08900047 0x00000000
rtds_write 0x0890004E 0x00000000
rtds_write 0x0890004F 0x00000000
rtds_write 0x08900050 0x00000000
rtds_write 0x08900051 0x00000000
rtds_write 0x08900052 0x00000000
rtds_write 0x08900053 0x00000000
rtds_write 0x08900054 0x00000000
rtds_write 0x08900055 0x00000000
rtds_write 0x08900056 0x00000000
rtds_write 0x08900057 0x00000000
rtds_write 0x08900058 0x00000000
rtds_write 0x08900059 0x00000000
rtds_file_write 0x08948000 trivial_imem.txt
rtds_file_write 0x0894A000 trivial_lut.txt
rtds_write 0x08900060 0x00000001
rtds_write 0x08900061 0x00000000
rtds_write 0x08900063 0x00000000
rtds_write 0x08900064 0x00000000
rtds_write 0x08900065 0x00000000
rtds_write 0x08900066 0x00000000
rtds_write 0x08900067 0x00000000
rtds_write 0x0890006E 0x00000000
rtds_write 0x0890006F 0x00000000
rtds_write 0x08900070 0x00000000
rtds_write 0x08900071 0x00000000
rtds_write 0x08900072 0x00000000
rtds_write 0x08900073 0x00000000
rtds_write 0x08900074 0x00000000
rtds_write 0x08900075 0x00000000
rtds_write 0x08900076 0x00000000
rtds_write 0x08900077 0x00000000
rtds_write 0x08900078 0x00000000
rtds_write 0x08900079 0x00000000
rtds_file_write 0x08950000 trivial_imem.txt
rtds_file_write 0x08952000 trivial_lut.txt


REM SPC2 Variable Delay initialization...
rtds_write 0x08900001 0x0


REM SPC2 Output voltage compare mode...
rtds_write 0x08900005 0x00000000
rtds_write 0x08900006 0x00000000


REM SPC2 Matrix multiplier initialization...
rtds_file_write 0x08800000 SPC2_Com_Word.txt
rtds_file_write 0x08820000 SPC2_Com_LUT.txt
rtds_file_write 0x08880000 SPC2_MAC0.txt
rtds_file_write 0x08882000 SPC2_MAC1.txt
rtds_file_write 0x08884000 SPC2_MAC2.txt
rtds_file_write 0x08886000 SPC2_MAC3.txt
rtds_write 0x08900004 0x00000001


REM SPC2 Contactors initialization...
rtds_write 0x08A40000 0x00000000
rtds_write 0x08A40080 0x00000000
rtds_write 0x08A40100 0x00000000
rtds_write 0x08A40180 0x00000000
rtds_write 0x08A40200 0x00000000
rtds_write 0x08A40280 0x00000000
rtds_write 0x08A40300 0x00000000
rtds_write 0x08A40380 0x00000000
rtds_write 0x08A40400 0x00000001


REM SPC2 GDS compensation settings...
rtds_write 0x088C0000 0x00000000
rtds_write 0x088C0001 0x00000000
rtds_write 0x088C0004 0x00000000
rtds_write 0x088C0005 0x00000000
rtds_write 0x08900000 0x00000000
rtds_write 0x08900007 0x00000000


REM SPC2 FSM digital input pin assignments...


REM SPC2 Comparators initialization...


REM SPC2 DTSM initialization...
rtds_write 0x08A80000 0x00000000
rtds_write 0x08A80080 0x00000001
rtds_write 0x08A80180 0x00000000
rtds_write 0x08A80200 0x00000000
rtds_write 0x08A80280 0x00000001
rtds_write 0x08A80300 0x00000000
rtds_write 0x08A80001 0x00000000
rtds_write 0x08A80081 0x00000001
rtds_write 0x08A80181 0x00000000
rtds_write 0x08A80201 0x00000000
rtds_write 0x08A80281 0x00000001
rtds_write 0x08A80301 0x00000000
rtds_write 0x08A80002 0x00000000
rtds_write 0x08A80082 0x00000001
rtds_write 0x08A80182 0x00000000
rtds_write 0x08A80202 0x00000000
rtds_write 0x08A80282 0x00000001
rtds_write 0x08A80302 0x00000000
rtds_write 0x08A80003 0x00000000
rtds_write 0x08A80083 0x00000001
rtds_write 0x08A80183 0x00000000
rtds_write 0x08A80203 0x00000000
rtds_write 0x08A80283 0x00000001
rtds_write 0x08A80303 0x00000000
rtds_write 0x08A80004 0x00000000
rtds_write 0x08A80084 0x00000001
rtds_write 0x08A80184 0x00000000
rtds_write 0x08A80204 0x00000000
rtds_write 0x08A80284 0x00000001
rtds_write 0x08A80304 0x00000000
rtds_write 0x08A80005 0x00000000
rtds_write 0x08A80085 0x00000001
rtds_write 0x08A80185 0x00000000
rtds_write 0x08A80205 0x00000000
rtds_write 0x08A80285 0x00000001
rtds_write 0x08A80305 0x00000000
rtds_write 0x08A80006 0x00000000
rtds_write 0x08A80086 0x00000001
rtds_write 0x08A80186 0x00000000
rtds_write 0x08A80206 0x00000000
rtds_write 0x08A80286 0x00000001
rtds_write 0x08A80306 0x00000000
rtds_write 0x08A80007 0x00000000
rtds_write 0x08A80087 0x00000001
rtds_write 0x08A80187 0x00000000
rtds_write 0x08A80207 0x00000000
rtds_write 0x08A80287 0x00000001
rtds_write 0x08A80307 0x00000000
rtds_write 0x08A80008 0x00000000
rtds_write 0x08A80088 0x00000001
rtds_write 0x08A80188 0x00000000
rtds_write 0x08A80208 0x00000000
rtds_write 0x08A80288 0x00000001
rtds_write 0x08A80308 0x00000000
rtds_write 0x08A80009 0x00000000
rtds_write 0x08A80089 0x00000001
rtds_write 0x08A80189 0x00000000
rtds_write 0x08A80209 0x00000000
rtds_write 0x08A80289 0x00000001
rtds_write 0x08A80309 0x00000000
rtds_write 0x08A8000A 0x00000000
rtds_write 0x08A8008A 0x00000001
rtds_write 0x08A8018A 0x00000000
rtds_write 0x08A8020A 0x00000000
rtds_write 0x08A8028A 0x00000001
rtds_write 0x08A8030A 0x00000000
rtds_write 0x08A8000B 0x00000000
rtds_write 0x08A8008B 0x00000001
rtds_write 0x08A8018B 0x00000000
rtds_write 0x08A8020B 0x00000000
rtds_write 0x08A8028B 0x00000001
rtds_write 0x08A8030B 0x00000000
rtds_write 0x08A8000C 0x00000000
rtds_write 0x08A8008C 0x00000001
rtds_write 0x08A8018C 0x00000000
rtds_write 0x08A8020C 0x00000000
rtds_write 0x08A8028C 0x00000001
rtds_write 0x08A8030C 0x00000000


REM SPC2 Time Varying Elements initialization...


REM *****************************************:


REM * SPC3 entries:


REM *****************************************:


REM SPC3 Topology Selector (TS) initialization...
rtds_file_write 0x08D80000 SPC3_red_table.txt
rtds_write 0x08D00020 0x00000001
rtds_write 0x08D00021 0x00000000
rtds_write 0x08D00023 0x00000000
rtds_write 0x08D00024 0x00000000
rtds_write 0x08D00025 0x00000000
rtds_write 0x08D00026 0x00000000
rtds_write 0x08D00027 0x00000000
rtds_write 0x08D0002E 0x00000000
rtds_write 0x08D0002F 0x00000000
rtds_write 0x08D00030 0x00000000
rtds_write 0x08D00031 0x00000000
rtds_write 0x08D00032 0x00000000
rtds_write 0x08D00033 0x00000000
rtds_write 0x08D00034 0x00000000
rtds_write 0x08D00035 0x00000000
rtds_write 0x08D00036 0x00000000
rtds_write 0x08D00037 0x00000000
rtds_write 0x08D00038 0x00000000
rtds_write 0x08D00039 0x00000000
rtds_file_write 0x08D40000 trivial_imem.txt
rtds_file_write 0x08D42000 trivial_lut.txt
rtds_write 0x08D00040 0x00000001
rtds_write 0x08D00041 0x00000000
rtds_write 0x08D00043 0x00000000
rtds_write 0x08D00044 0x00000000
rtds_write 0x08D00045 0x00000000
rtds_write 0x08D00046 0x00000000
rtds_write 0x08D00047 0x00000000
rtds_write 0x08D0004E 0x00000000
rtds_write 0x08D0004F 0x00000000
rtds_write 0x08D00050 0x00000000
rtds_write 0x08D00051 0x00000000
rtds_write 0x08D00052 0x00000000
rtds_write 0x08D00053 0x00000000
rtds_write 0x08D00054 0x00000000
rtds_write 0x08D00055 0x00000000
rtds_write 0x08D00056 0x00000000
rtds_write 0x08D00057 0x00000000
rtds_write 0x08D00058 0x00000000
rtds_write 0x08D00059 0x00000000
rtds_file_write 0x08D48000 trivial_imem.txt
rtds_file_write 0x08D4A000 trivial_lut.txt
rtds_write 0x08D00060 0x00000001
rtds_write 0x08D00061 0x00000000
rtds_write 0x08D00063 0x00000000
rtds_write 0x08D00064 0x00000000
rtds_write 0x08D00065 0x00000000
rtds_write 0x08D00066 0x00000000
rtds_write 0x08D00067 0x00000000
rtds_write 0x08D0006E 0x00000000
rtds_write 0x08D0006F 0x00000000
rtds_write 0x08D00070 0x00000000
rtds_write 0x08D00071 0x00000000
rtds_write 0x08D00072 0x00000000
rtds_write 0x08D00073 0x00000000
rtds_write 0x08D00074 0x00000000
rtds_write 0x08D00075 0x00000000
rtds_write 0x08D00076 0x00000000
rtds_write 0x08D00077 0x00000000
rtds_write 0x08D00078 0x00000000
rtds_write 0x08D00079 0x00000000
rtds_file_write 0x08D50000 trivial_imem.txt
rtds_file_write 0x08D52000 trivial_lut.txt


REM SPC3 Variable Delay initialization...
rtds_write 0x08D00001 0x0


REM SPC3 Output voltage compare mode...
rtds_write 0x08D00005 0x00000000
rtds_write 0x08D00006 0x00000000


REM SPC3 Matrix multiplier initialization...
rtds_file_write 0x08C00000 SPC3_Com_Word.txt
rtds_file_write 0x08C20000 SPC3_Com_LUT.txt
rtds_file_write 0x08C80000 SPC3_MAC0.txt
rtds_file_write 0x08C82000 SPC3_MAC1.txt
rtds_file_write 0x08C84000 SPC3_MAC2.txt
rtds_file_write 0x08C86000 SPC3_MAC3.txt
rtds_write 0x08D00004 0x00000001


REM SPC3 Contactors initialization...
rtds_write 0x08E40000 0x00000000
rtds_write 0x08E40080 0x00000000
rtds_write 0x08E40100 0x00000000
rtds_write 0x08E40180 0x00000000
rtds_write 0x08E40200 0x00000000
rtds_write 0x08E40280 0x00000000
rtds_write 0x08E40300 0x00000000
rtds_write 0x08E40380 0x00000000
rtds_write 0x08E40400 0x00000001


REM SPC3 GDS compensation settings...
rtds_write 0x08CC0000 0x00000000
rtds_write 0x08CC0001 0x00000000
rtds_write 0x08CC0004 0x00000000
rtds_write 0x08CC0005 0x00000000
rtds_write 0x08D00000 0x00000000
rtds_write 0x08D00007 0x00000000


REM SPC3 FSM digital input pin assignments...


REM SPC3 Comparators initialization...


REM SPC3 DTSM initialization...
rtds_write 0x08E80000 0x00000000
rtds_write 0x08E80080 0x00000001
rtds_write 0x08E80180 0x00000000
rtds_write 0x08E80200 0x00000000
rtds_write 0x08E80280 0x00000001
rtds_write 0x08E80300 0x00000000
rtds_write 0x08E80001 0x00000000
rtds_write 0x08E80081 0x00000001
rtds_write 0x08E80181 0x00000000
rtds_write 0x08E80201 0x00000000
rtds_write 0x08E80281 0x00000001
rtds_write 0x08E80301 0x00000000
rtds_write 0x08E80002 0x00000000
rtds_write 0x08E80082 0x00000001
rtds_write 0x08E80182 0x00000000
rtds_write 0x08E80202 0x00000000
rtds_write 0x08E80282 0x00000001
rtds_write 0x08E80302 0x00000000
rtds_write 0x08E80003 0x00000000
rtds_write 0x08E80083 0x00000001
rtds_write 0x08E80183 0x00000000
rtds_write 0x08E80203 0x00000000
rtds_write 0x08E80283 0x00000001
rtds_write 0x08E80303 0x00000000
rtds_write 0x08E80004 0x00000000
rtds_write 0x08E80084 0x00000001
rtds_write 0x08E80184 0x00000000
rtds_write 0x08E80204 0x00000000
rtds_write 0x08E80284 0x00000001
rtds_write 0x08E80304 0x00000000
rtds_write 0x08E80005 0x00000000
rtds_write 0x08E80085 0x00000001
rtds_write 0x08E80185 0x00000000
rtds_write 0x08E80205 0x00000000
rtds_write 0x08E80285 0x00000001
rtds_write 0x08E80305 0x00000000
rtds_write 0x08E80006 0x00000000
rtds_write 0x08E80086 0x00000001
rtds_write 0x08E80186 0x00000000
rtds_write 0x08E80206 0x00000000
rtds_write 0x08E80286 0x00000001
rtds_write 0x08E80306 0x00000000
rtds_write 0x08E80007 0x00000000
rtds_write 0x08E80087 0x00000001
rtds_write 0x08E80187 0x00000000
rtds_write 0x08E80207 0x00000000
rtds_write 0x08E80287 0x00000001
rtds_write 0x08E80307 0x00000000
rtds_write 0x08E80008 0x00000000
rtds_write 0x08E80088 0x00000001
rtds_write 0x08E80188 0x00000000
rtds_write 0x08E80208 0x00000000
rtds_write 0x08E80288 0x00000001
rtds_write 0x08E80308 0x00000000
rtds_write 0x08E80009 0x00000000
rtds_write 0x08E80089 0x00000001
rtds_write 0x08E80189 0x00000000
rtds_write 0x08E80209 0x00000000
rtds_write 0x08E80289 0x00000001
rtds_write 0x08E80309 0x00000000
rtds_write 0x08E8000A 0x00000000
rtds_write 0x08E8008A 0x00000001
rtds_write 0x08E8018A 0x00000000
rtds_write 0x08E8020A 0x00000000
rtds_write 0x08E8028A 0x00000001
rtds_write 0x08E8030A 0x00000000
rtds_write 0x08E8000B 0x00000000
rtds_write 0x08E8008B 0x00000001
rtds_write 0x08E8018B 0x00000000
rtds_write 0x08E8020B 0x00000000
rtds_write 0x08E8028B 0x00000001
rtds_write 0x08E8030B 0x00000000
rtds_write 0x08E8000C 0x00000000
rtds_write 0x08E8008C 0x00000001
rtds_write 0x08E8018C 0x00000000
rtds_write 0x08E8020C 0x00000000
rtds_write 0x08E8028C 0x00000001
rtds_write 0x08E8030C 0x00000000


REM SPC3 Time Varying Elements initialization...


REM *****************************************:


REM * SPC4 entries:


REM *****************************************:


REM SPC4 Topology Selector (TS) initialization...
rtds_file_write 0x09180000 SPC4_red_table.txt
rtds_write 0x09100020 0x00000001
rtds_write 0x09100021 0x00000000
rtds_write 0x09100023 0x00000000
rtds_write 0x09100024 0x00000000
rtds_write 0x09100025 0x00000000
rtds_write 0x09100026 0x00000000
rtds_write 0x09100027 0x00000000
rtds_write 0x0910002E 0x00000000
rtds_write 0x0910002F 0x00000000
rtds_write 0x09100030 0x00000000
rtds_write 0x09100031 0x00000000
rtds_write 0x09100032 0x00000000
rtds_write 0x09100033 0x00000000
rtds_write 0x09100034 0x00000000
rtds_write 0x09100035 0x00000000
rtds_write 0x09100036 0x00000000
rtds_write 0x09100037 0x00000000
rtds_write 0x09100038 0x00000000
rtds_write 0x09100039 0x00000000
rtds_file_write 0x09140000 trivial_imem.txt
rtds_file_write 0x09142000 trivial_lut.txt
rtds_write 0x09100040 0x00000001
rtds_write 0x09100041 0x00000000
rtds_write 0x09100043 0x00000000
rtds_write 0x09100044 0x00000000
rtds_write 0x09100045 0x00000000
rtds_write 0x09100046 0x00000000
rtds_write 0x09100047 0x00000000
rtds_write 0x0910004E 0x00000000
rtds_write 0x0910004F 0x00000000
rtds_write 0x09100050 0x00000000
rtds_write 0x09100051 0x00000000
rtds_write 0x09100052 0x00000000
rtds_write 0x09100053 0x00000000
rtds_write 0x09100054 0x00000000
rtds_write 0x09100055 0x00000000
rtds_write 0x09100056 0x00000000
rtds_write 0x09100057 0x00000000
rtds_write 0x09100058 0x00000000
rtds_write 0x09100059 0x00000000
rtds_file_write 0x09148000 trivial_imem.txt
rtds_file_write 0x0914A000 trivial_lut.txt
rtds_write 0x09100060 0x00000001
rtds_write 0x09100061 0x00000000
rtds_write 0x09100063 0x00000000
rtds_write 0x09100064 0x00000000
rtds_write 0x09100065 0x00000000
rtds_write 0x09100066 0x00000000
rtds_write 0x09100067 0x00000000
rtds_write 0x0910006E 0x00000000
rtds_write 0x0910006F 0x00000000
rtds_write 0x09100070 0x00000000
rtds_write 0x09100071 0x00000000
rtds_write 0x09100072 0x00000000
rtds_write 0x09100073 0x00000000
rtds_write 0x09100074 0x00000000
rtds_write 0x09100075 0x00000000
rtds_write 0x09100076 0x00000000
rtds_write 0x09100077 0x00000000
rtds_write 0x09100078 0x00000000
rtds_write 0x09100079 0x00000000
rtds_file_write 0x09150000 trivial_imem.txt
rtds_file_write 0x09152000 trivial_lut.txt


REM SPC4 Variable Delay initialization...
rtds_write 0x09100001 0x0


REM SPC4 Output voltage compare mode...
rtds_write 0x09100005 0x00000000
rtds_write 0x09100006 0x00000000


REM SPC4 Matrix multiplier initialization...
rtds_file_write 0x09000000 SPC4_Com_Word.txt
rtds_file_write 0x09020000 SPC4_Com_LUT.txt
rtds_file_write 0x09080000 SPC4_MAC0.txt
rtds_file_write 0x09082000 SPC4_MAC1.txt
rtds_file_write 0x09084000 SPC4_MAC2.txt
rtds_file_write 0x09086000 SPC4_MAC3.txt
rtds_write 0x09100004 0x00000007


REM SPC4 Contactors initialization...
rtds_write 0x09240000 0x00000000
rtds_write 0x09240080 0x00000000
rtds_write 0x09240100 0x00000000
rtds_write 0x09240180 0x00000000
rtds_write 0x09240200 0x00000000
rtds_write 0x09240280 0x00000000
rtds_write 0x09240300 0x00000001
rtds_write 0x09240380 0x00000042
rtds_write 0x09240400 0x00000001
rtds_write 0x09240001 0x00000000
rtds_write 0x09240081 0x00000000
rtds_write 0x09240101 0x00000000
rtds_write 0x09240181 0x00000000
rtds_write 0x09240201 0x00000000
rtds_write 0x09240281 0x00000000
rtds_write 0x09240301 0x00000001
rtds_write 0x09240381 0x00000043
rtds_write 0x09240401 0x00000001
rtds_write 0x09240002 0x00000000
rtds_write 0x09240082 0x00000000
rtds_write 0x09240102 0x00000000
rtds_write 0x09240182 0x00000000
rtds_write 0x09240202 0x00000000
rtds_write 0x09240282 0x00000000
rtds_write 0x09240302 0x00000001
rtds_write 0x09240382 0x00000044
rtds_write 0x09240402 0x00000001


REM SPC4 GDS compensation settings...
rtds_write 0x090C0000 0x00000000
rtds_write 0x090C0001 0x00000000
rtds_write 0x090C0004 0x00000000
rtds_write 0x090C0005 0x00000000
rtds_write 0x09100000 0x00000000
rtds_write 0x09100007 0x00000000


REM SPC4 FSM digital input pin assignments...


REM SPC4 Comparators initialization...


REM SPC4 DTSM initialization...


REM SPC4 Time Varying Elements initialization...


REM *****************************************:


REM * SPC5 entries:


REM *****************************************:


REM SPC5 Topology Selector (TS) initialization...
rtds_file_write 0x09580000 SPC5_red_table.txt
rtds_write 0x09500020 0x00000000
rtds_write 0x09500021 0x00000000
rtds_write 0x09500023 0x00000000
rtds_write 0x09500024 0x00000000
rtds_write 0x09500025 0x00000000
rtds_write 0x09500026 0x00000000
rtds_write 0x09500027 0x00000000
rtds_write 0x0950002E 0x00000000
rtds_write 0x0950002F 0x00000000
rtds_write 0x09500030 0x00000000
rtds_write 0x09500031 0x00000000
rtds_write 0x09500032 0x00000000
rtds_write 0x09500033 0x00000000
rtds_write 0x09500034 0x00000000
rtds_write 0x09500035 0x00000000
rtds_write 0x09500036 0x00000000
rtds_write 0x09500037 0x00000000
rtds_write 0x09500038 0x00000000
rtds_write 0x09500039 0x00000000
rtds_file_write 0x09540000 trivial_imem.txt
rtds_file_write 0x09542000 trivial_lut.txt
rtds_write 0x09500040 0x00000000
rtds_write 0x09500041 0x00000000
rtds_write 0x09500043 0x00000000
rtds_write 0x09500044 0x00000000
rtds_write 0x09500045 0x00000000
rtds_write 0x09500046 0x00000000
rtds_write 0x09500047 0x00000000
rtds_write 0x0950004E 0x00000000
rtds_write 0x0950004F 0x00000000
rtds_write 0x09500050 0x00000000
rtds_write 0x09500051 0x00000000
rtds_write 0x09500052 0x00000000
rtds_write 0x09500053 0x00000000
rtds_write 0x09500054 0x00000000
rtds_write 0x09500055 0x00000000
rtds_write 0x09500056 0x00000000
rtds_write 0x09500057 0x00000000
rtds_write 0x09500058 0x00000000
rtds_write 0x09500059 0x00000000
rtds_file_write 0x09548000 trivial_imem.txt
rtds_file_write 0x0954A000 trivial_lut.txt
rtds_write 0x09500060 0x00000000
rtds_write 0x09500061 0x00000000
rtds_write 0x09500063 0x00000000
rtds_write 0x09500064 0x00000000
rtds_write 0x09500065 0x00000000
rtds_write 0x09500066 0x00000000
rtds_write 0x09500067 0x00000000
rtds_write 0x0950006E 0x00000000
rtds_write 0x0950006F 0x00000000
rtds_write 0x09500070 0x00000000
rtds_write 0x09500071 0x00000000
rtds_write 0x09500072 0x00000000
rtds_write 0x09500073 0x00000000
rtds_write 0x09500074 0x00000000
rtds_write 0x09500075 0x00000000
rtds_write 0x09500076 0x00000000
rtds_write 0x09500077 0x00000000
rtds_write 0x09500078 0x00000000
rtds_write 0x09500079 0x00000000
rtds_file_write 0x09550000 trivial_imem.txt
rtds_file_write 0x09552000 trivial_lut.txt


REM SPC5 Variable Delay initialization...
rtds_write 0x09500001 0x0


REM SPC5 Output voltage compare mode...
rtds_write 0x09500005 0x00000000
rtds_write 0x09500006 0x00000000


REM SPC5 Matrix multiplier initialization...
rtds_file_write 0x09400000 SPC5_Com_Word.txt
rtds_file_write 0x09420000 SPC5_Com_LUT.txt
rtds_file_write 0x09480000 SPC5_MAC0.txt
rtds_file_write 0x09482000 SPC5_MAC1.txt
rtds_file_write 0x09484000 SPC5_MAC2.txt
rtds_file_write 0x09486000 SPC5_MAC3.txt
rtds_write 0x09500004 0x00000000


REM SPC5 Contactors initialization...


REM SPC5 GDS compensation settings...
rtds_write 0x094C0000 0x00000000
rtds_write 0x094C0001 0x00000000
rtds_write 0x094C0004 0x00000000
rtds_write 0x094C0005 0x00000000
rtds_write 0x09500000 0x00000000
rtds_write 0x09500007 0x00000000


REM SPC5 FSM digital input pin assignments...


REM SPC5 Comparators initialization...


REM SPC5 DTSM initialization...


REM SPC5 Time Varying Elements initialization...
*****************************************:


REM SP data configuration...
*****************************************:


REM Setting the capture sample step...


REM post SP Init calculation...
rtds_write  
rtds_write 0x00000041 0x000011C1
rtds_write 0x00000005 0x00000006
rtds_write 0x00000043 0x00002710
rtds_write 0x00000042 0x000001F3
rtds_write 0x0000000A 0x00000001


REM CoProcessors uBlaze_1, uBlaze_2 and uBlaze_3 configuration
glbl_write 0x40800000 0x7
glbl_write 0xf8000008 0xdf0d


REM CoProcessor ARM_1 configuration...
glbl_write 0xfffffff0 0xffffff2c  
glbl_write 0xFFFFFF00 0xe3e0000f
glbl_write 0xFFFFFF04 0xe3a01000
glbl_write 0xFFFFFF08 0xe5801000
glbl_write 0xFFFFFF0C 0xe320f002
glbl_write 0xFFFFFF10 0xe5902000
glbl_write 0xFFFFFF14 0xe1520001
glbl_write 0xFFFFFF18 0x0afffffb
glbl_write 0xFFFFFF1C 0xe1a0f002
glbl_write 0x00000000 0xe3e0f0ff
glbl_write 0xf8000244 0x2
glbl_write 0xf8000244 0x22
glbl_write 0xf8000244 0x20
glbl_write 0xf8000244 0x0
glbl_file_write 0x15000000 user_sp_cpu_0_imem.bin


REM configure system synchronization
sys_command_custom "echo -e '[global]\n{ \n} \n' > ptp_settings.txt"
hil_app_var_write 0 0


REM Communication peripherals reset and load sequence


REM disable can devices
sys_command 0x2


REM Zynq TRM APER_CLK_CTRL, always turn on both clocks for GEMs and CAN controllers
glbl_write 0xF800012C 0x13304CC


REM Zynq TRM CAN_CLK_CTRL
glbl_write 0xf800015C 0x100A03


REM Zynq TRM GEM1_RCLK_CTRL
glbl_write 0xF800013C 0x00000011
glbl_write 0xF8000144 0x00100141
glbl_file_write 0x16000000 comm_cpu_0_imem.bin
glbl_file_write 0x55000000 comm_cpu_0_fsa.bin
glbl_write 0x40800000 0x5
glbl_write 0xfffffff0 0x15000000


REM Restart counter for collected Linux OS communication apps
app_file_write 0x0 app_init


REM Clear the /mnt/ext_files. directory
file_write_custom clean_ext_files None


REM Initialize Linux GOOSE PUBLISHER APP Configuration
app_file_write 0x2 goose_publisher.elf


REM Initialize Linux GOOSE SUBSCRIBER APP Configuration
app_file_write 0x3 goose_subscriber.elf
rtds_write 0x00000027 0x00000640
rtds_write 0x00000040 0x00FFFFFF