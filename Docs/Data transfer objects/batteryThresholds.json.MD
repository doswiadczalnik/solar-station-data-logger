This object transports data of current production of electricity. It must contain two objects:

- manifest - defines JSON version and type. It must be **type=batteryThresholds**
- payload - main data



**batteryThresholds.JSON**

```json
{
  "manifest": {
    "type": "batteryThresholds",
    "version": 1
  },
  "payload": {
    "device": "",
    "battery": "",
    "thresholdType": "",
    "voltage": 0,
    "measurementTime": "2021-03-29T19:23:03.241Z"
  }
}
```



##### [ObjGen.com](http://www.objgen.com/json) definition:

```
manifest
  type=batteryThresholds
  version n=1
payload
  device s
  battery s
  thresholdType s
  voltage n
  measurementTime d
```



##### Example:

```json
{
  "manifest": {
    "type": "batteryThresholds",
    "version": 1
  },
  "payload": {
    "device": "regulator",
    "battery": "main",
    "thresholdType": "minimum",
    "voltage": 5.12,
    "measurementTime": "2021-03-26T17:41:33.743Z"
  }
}
```