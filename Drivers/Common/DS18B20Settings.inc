%- Settings generated by Component Wizard
%;**%>12 Component Name %>60: %get(DeviceName,Text)
%;**%>12 Temperature Reading %>60: %get(readAuto,Text)
%;**%>12 Connection mode %>60: %get(connMultiple,Text)
%if %get(connMultiple, Bool) = 'yes'
%;**%>14 Number of DS18B20 devices to connect %>60: %get(deviceCount,Text)
  %for i_device1 from [0..%deviceCountMaxItem]
%;**%>16 Sensor 64-bit ROM code %>60: %get(itemSensor%'i_device1',Text)
%;**%>18 Family code %>60: %get(rom0%'i_device1',Text)
%;**%>18 Serial number 1 %>60: %get(rom1%'i_device1',Text)
%;**%>18 Serial number 2 %>60: %get(rom2%'i_device1',Text)
%;**%>18 Serial number 3 %>60: %get(rom3%'i_device1',Text)
%;**%>18 Serial number 4 %>60: %get(rom4%'i_device1',Text)
%;**%>18 Serial number 5 %>60: %get(rom5%'i_device1',Text)
%;**%>18 Serial number 6 %>60: %get(rom6%'i_device1',Text)
%;**%>18 CRC %>60: %get(rom7%'i_device1',Text)
  %endfor %-i_device1
%else %- connMultiple
%endif %- connMultiple
%;**%>12 One Wire %>60: %get(OW,Text)
%;**%>12 SDK %>60: %get(sdk,Text)
%;**%>12 Shell %>60: %get(ShellEnabled,Text)
%if %get(ShellEnabled, Bool) = 'yes'
%;**%>14 Shell %>60: %get(Shell,Text)
%;**%>14 Utility %>60: %get(Utility,Text)
%else %- ShellEnabled
%endif %- ShellEnabled
