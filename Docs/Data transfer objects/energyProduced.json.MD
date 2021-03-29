This object transports data of current production of electricity. It must contain two objects:

- manifest - defines JSON version and type. It must be **type=energyProduced**
- payload - main data



**energyProduced.JSON**

```json
{
  "manifest": {
    "type": "energyProduced",
    "version": 1
  },
  "payload": {
    "device": "",
    "daily": 0,
    "monthly": 0,
    "yearly": 0,
    "total": 0,
    "measurementTime": "2021-03-29T19:27:14.151Z"
  }
}
```



##### [ObjGen.com](http://www.objgen.com/json) definition:

```
manifest
  type=energyProduced
  version n=1
payload
  device s
  daily n
  monthly n
  yearly n
  total n
  measurementTime d
```



##### Example:

```json
{
  "manifest": {
    "type": "energyProduced",
    "version": 1
  },
  "payload": {
    "device": "regulator",
    "daily": 0,
    "monthly": 0,
    "yearly": 0,
    "total": 0,
    "measurementTime": "2021-03-26T18:40:11.698Z"
  }
}
```