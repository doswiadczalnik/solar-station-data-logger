This object transports data of current production of electricity. It must contain three objects:

- manifest - defines JSON version and type. It must be **type=batteryCondition**
- payload - main data
- measurement time



**batteryCondition.JSON**

```json
{
  "manifest": {
    "type": "batteryCondition",
    "version": 1
  },
  "payload": {
    "device": "",
    "battery": "",
    "temp": 0,
    "chargePercent": 0
  },
  "measurementTime": "2021-03-29T18:59:55.031Z"
}
```



##### [ObjGen.com](http://www.objgen.com/json) definition:

```
manifest
  type=batteryCondition
  version n=1
payload
  device s
  battery s
  temp n
  chargePercent n
measurementTime d
```



##### Example:

```json
{
  "manifest": {
    "type": "batteryCondition",
    "version": 1
  },
  "payload": {
    "device": "regulator",
    "battery": "main",
    "temp": 0,
    "chargePercent": 0
  },
  "measurementTime": "2021-03-29T18:59:55.031Z"
}
```