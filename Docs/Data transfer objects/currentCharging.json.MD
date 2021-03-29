This object transports data of current production of electricity. It must contain two objects:

- manifest - defines JSON version and type. It must be **type=currentCharging**
- payload - main data



**currentCharging.JSON**

```json
{
  "manifest": {
    "type": "currentCharging",
    "version": 1
  },
  "payload": {
    "device": "",
    "battery": "",
    "voltage": 0,
    "current": 0,
    "measurementTime": "2021-03-29T16:54:44.232Z"
  }
}
```



##### [ObjGen.com](http://www.objgen.com/json) definition:

```
manifest
  type=currentCharging
  version n=1
payload
  device s
  battery s
  voltage n
  current n
  measurementTime d
```



##### Example:

```json
{
  "manifest": {
    "type": "currentCharging",
    "version": 1
  },
  "payload": {
    "device": "regulator",
    "battery": "main",
    "voltage": 12.1,
    "current": -0.1,
    "measurementTime": "2021-03-25T20:11:43.284Z"
  }
}
```