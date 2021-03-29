This object transports data of current production of electricity. It must contain two objects:

- manifest - defines JSON version and type. It must be **type=batteryCondition**
- payload - main data



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
    "chargePercent": 0,
    "measurementTime": "2021-03-29T19:20:43.972Z"
  }
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
    "chargePercent": 0,
    "measurementTime": "2021-03-26T17:46:08.049Z"
  }
}
```