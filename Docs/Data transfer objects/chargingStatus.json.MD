This object transports data of current production of electricity. It must contain three objects:

- manifest - defines JSON version and type. It must be **type=chargingStatus**
- payload - main data
- measurement time



**chargingStatus.JSON**

```json
{
  "manifest": {
    "type": "chargingStatus",
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
    "status": "Boost"
  },
  "measurementTime": "2021-03-29T18:59:55.031Z"
}
```



Available statuses are described in Docs/Dictionaries/chargingStatusDictionary.MD and are also in JSON file in Software/Common/Dictionaries/chargingStatusDictionary.JSON