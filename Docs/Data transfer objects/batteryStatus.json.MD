This object transports data of current production of electricity. It must contain three objects:

- manifest - defines JSON version and type. It must be **type=batteryStatus**
- payload - main data
- measurement time



**batteryStatus.JSON**

```json
{
  "manifest": {
    "type": "batteryStatus",
    "version": 1
  },
  "payload": {
    "device": "",
    "battery": "",
    "status": ""
  },
  "measurementTime": "2021-03-29T18:59:55.031Z"
}
```



##### [ObjGen.com](http://www.objgen.com/json) definition:

```
manifest
  type=batteryStatus
  version n=1
payload
  device s
  battery s
  status s
measurementTime d
```



##### Example:

```json
{
  "manifest": {
    "type": "batteryStatus",
    "version": 1
  },
  "payload": {
    "device": "regulator",
    "battery": "main",
    "status": "normal"
  },
  "measurementTime": "2021-03-29T18:59:55.031Z"
}
```