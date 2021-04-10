This object describes available statuses of battery. It must contain objects:

- manifest - defines JSON version and type. It must be **type=chargingStatusDictionary**
- statuses with
  - chargingStatuses



**chargingStatusDictionary.JSON**

```json
{
  "manifest": {
    "type": "chargingStatusDictionary",
    "version": 1
  },
  "statuses": {
    "chargingStatuses": {
      "0": "No charging",
      "1": "Float",
      "2": "Boost",
      "3": "Equalization"
    }
  }
}
```



##### [ObjGen.com](http://www.objgen.com/json) definition:

```
manifest
  type=chargingStatusDictionary
  version n=1
statuses
  chargingStatuses
    0 s = No charging
    1 s = Float
    2 s = Boost
    3 s = Equalization

```

