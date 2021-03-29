This object transports data of current production of electricity. It must contain two objects:

- manifest - defines JSON version and type. It must be **type=currentProduction**
- payload - main data



**currentProduction.JSON**

```json
{
  "manifest": {
    "type": "currentProduction",
    "version": 1
  },
  "payload": {
    "device": "",
    "voltage": 0,
    "current": 0,
    "power": 0,
    "measurementTime": "2021-03-29T16:19:30.768Z"
  }
}
```



##### [ObjGen.com](http://www.objgen.com/json) definition:

```
manifest
  type=currentProduction
  version n=1
payload
  device s
  voltage n
  current n
  power n
  measurementTime d
```



##### Example:

```json
{
  "manifest": {
    "type": "currentProduction",
    "version": 1
  },
  "payload": {
    "device": "regulator",
    "voltage": 12.2,
    "current": 1,
    "power": 12.2,
    "measurementTime": "2021-03-29T16:24:53.531Z"
  }
}
```