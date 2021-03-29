This object transports data of current production of electricity. It must contain two objects:

- manifest - defines JSON version and type. It must be **type=pvStatus**
- payload - main data



**pvStatus.JSON**

```json
{
  "manifest": {
    "type": "pvStatus",
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
    "status": "normal",
    "measurementTime": "2021-03-25T20:11:43.284Z"
  }
}
```