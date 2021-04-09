This object transports data of current production of electricity. It must contain three objects:

- manifest - defines JSON version and type. It must be **type=deviceStatus**
- payload - main data
- measurement time



**deviceStatus.JSON**

```json
{
  "manifest": {
    "type": "deviceStatus",
    "version": 1
  },
  "payload": {
    "device": "",
    "status": ""
  },
  "measurementTime": "2021-03-29T18:59:55.031Z"
}
```



##### [ObjGen.com](http://www.objgen.com/json) definition:

```
manifest
  type=deviceStatus
  version n=1
payload
  device s
  status s
measurementTime d
```



##### Example:

```json
{
  "manifest": {
    "type": "deviceStatus",
    "version": 1
  },
  "payload": {
    "device": "regulator",
    "status": "online"
  },
  "measurementTime": "2021-03-29T18:59:55.031Z"
}
```