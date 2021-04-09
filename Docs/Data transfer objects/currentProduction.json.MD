This object transports data of current production of electricity. It must contain three objects:

- manifest - defines JSON version and type. It must be **type=currentProduction**
- payload - main data
- measurement time



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
    "power": 0
  },
  "measurementTime": "2021-03-29T18:59:55.031Z"
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
    "power": 12.2
  },
  "measurementTime": "2021-03-29T18:59:55.031Z"
}
```