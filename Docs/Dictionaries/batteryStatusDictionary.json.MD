This object describes available statuses of battery. It must contain objects:

- manifest - defines JSON version and type. It must be **type=batteryStatusDictionary**
- statuses with
  - voltageStatuses
  - tempStatuses
  - innerResistanceStatuses



**batteryStatusDictionary.JSON**

```json
{
  "manifest": {
    "type": "batteryStatusDictionary",
    "version": 1
  },
  "statuses": {
    "voltageStatuses": {
      "0": "Normal",
      "1": "Overvoltage",
      "2": "Undervoltage",
      "3": "Low voltage disconnect",
      "4": "Fault"
    },
    "tempStatuses": {
      "0": "Normal",
      "1": "Overtemp",
      "2": "Low temp"
    },
    "innerResistanceStatuses": {
      "0": "Normal",
      "1": "Abnormal"
    }
  }
}
```



##### [ObjGen.com](http://www.objgen.com/json) definition:

```
manifest
  type=batteryStatusDictionary
  version n=1
statuses
  voltageStatuses
    0 s = Normal
    1 s = Overvoltage
    2 s = Undervoltage
    3 s = Low voltage disconnect
    4 s = Fault
  tempStatuses
    0 s = Normal
    1 s = Overtemp
    2 s = Low temp
  innerResistanceStatuses
    0 s = Normal
    1 s = Abnormal
```

