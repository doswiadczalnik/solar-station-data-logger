This object transports data of current production of electricity. It must contain three objects:

- manifest - defines JSON version and type. It must be **type=pvThresholds**
- payload - main data
- measurement time



**pvThresholds.JSON**

```json
{
  "manifest": {
    "type": "pvThresholds",
    "version": 1
  },
  "payload": {
    "device": "",
    "minVoltage": 0,
	"maxVoltage": 0
  },
  "measurementTime": "2021-03-29T18:59:55.031Z"
}
```



##### [ObjGen.com](http://www.objgen.com/json) definition:

```
manifest
  type=pvThresholds
  version n=1
payload
  device s
  minVoltage n
  maxVoltage n
measurementTime d
```



##### Example:

```json
{
  "manifest": {
    "type": "pvThresholds",
    "version": 1
  },
  "payload": {
    "device": "regulator",
    "minVoltage": 5.12,
    "maxVoltage": 14.7
  },
  "measurementTime": "2021-03-29T18:59:55.031Z"
}
```