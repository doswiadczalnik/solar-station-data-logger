This object transports data of current production of electricity. It must contain three objects:

- manifest - defines JSON version and type. It must be **type=energyProduced**
- payload - main data
- measurement time



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
    "total": 0
  },
  "measurementTime": "2021-03-29T18:59:55.031Z"
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
    "total": 0
  },
  "measurementTime": "2021-03-29T18:59:55.031Z"
}
```