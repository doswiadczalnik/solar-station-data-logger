This object transports data of current production of electricity. It must contain two objects:

- manifest - defines JSON version and type. It must be **type=chargingStatus**
- payload - main data



**chargingStatus.JSON**

```json
{
  "manifest": {
    "type": "chargingStatus",
    "version": 1
  },
  "payload": {
    "device": "",
    "status": "",
    "measurementTime": "2021-03-29T18:59:55.031Z"
  }
}
```



##### [ObjGen.com](http://www.objgen.com/json) definition:

```
manifest
  type=chargingStatus
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
    "type": "chargingStatus",
    "version": 1
  },
  "payload": {
    "device": "regulator",
    "status": "boost charging",
    "measurementTime": "2021-03-25T20:11:43.284Z"
  }
}
```