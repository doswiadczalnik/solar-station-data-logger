This object transports data of current production of electricity. It must contain three objects:

- manifest - defines JSON version and type. It must be **type=deviceCondition**
- payload - main data
- measurement time



**deviceCondition.JSON**

```json
{
  "manifest": {
    "type": "deviceCondition",
    "version": 1
  },
  "payload": {
    "device": "",
    "temp": 0
  },
  "measurementTime": "2021-03-29T18:59:55.031Z"
}
```



##### [ObjGen.com](http://www.objgen.com/json) definition:

```
manifest
  type=deviceCondition
  version n=1
payload
  device s
  temp n
measurementTime d
```



##### Example:

```json
{
  "manifest": {
    "type": "deviceCondition",
    "version": 1
  },
  "payload": {
    "device": "regulator",
    "temp": 0
  },
  "measurementTime": "2021-03-29T18:59:55.031Z"
}
```