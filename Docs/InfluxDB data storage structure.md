#### The data structure

As you know, my data are saved in InfluxDB database.

I think, the best way to describe InfluxDB data storage structure is to show the line protocols for measurements. Here they are:

```
currentProduction,device=regulator voltage=12.00,current=1.00,power=12.00
currentConsumption,device=regulator voltage=12.00,current=1.00,power=12.00
pvStatus,device=regulator status="normal"
currentCharging,device=regulator,battery=main voltage=12.00,current=1.00
chargingStatus,device=regulator,battery=main status="boost"
batteryThresholds,device=regulator,battery=main minVoltage=10.00,maxVoltage=14.00
pvThresholds,device=regulator minVoltage=10.00,maxVoltage=14.00
batteryCondition,device=regulator,battery=main temp=25.00,chargePercent=90
batteryStatus,device=regulator,battery=main voltageStatus="normal",tempStatus="normal",innerResistanceStatus="normal"
deviceStatus,device=regulator status="online"
deviceCondition,device=regulator temp=25.00
energyProduced,device=regulator daily=1.43,monthly=12.00,yearly=20.00,total=100.00
energyConsumed,device=regulator daily=1.43,monthly=12.00,yearly=20.00,total=100.00
```

