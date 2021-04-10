This object transports data of current production of electricity. It must contain three objects:

- manifest - defines JSON version and type. It must be **type=pvStatus**
- payload - main data
- measurement time



**pvStatus.JSON**

```json
{
  "manifest": {
    "type": "pvStatus",
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
  type=pvStatus
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
    "type": "pvStatus",
    "version": 1
  },
  "payload": {
    "device": "regulator",
    "status": "normal"
  },
  "measurementTime": "2021-03-29T18:59:55.031Z"
}
```



Available statuses are described in Docs/Dictionaries/pvStatusDictionary.MD and are also in JSON file in Software/Common/Dictionaries/pvStatusDictionary.JSON