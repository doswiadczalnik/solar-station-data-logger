This object describes available statuses of battery. It must contain objects:

- manifest - defines JSON version and type. It must be **type=pvStatusDictionary**
- statuses with
  - inputStatuses



**pvStatusDictionary.JSON**

```json
{
  "manifest": {
    "type": "pvStatusDictionary",
    "version": 1
  },
  "statuses": {
    "inputStatuses": {
      "0": "Normal",
      "1": "No power connected",
      "2": "Higher volt input",
      "3": "Input volt error"
    }
  }
}
```



##### [ObjGen.com](http://www.objgen.com/json) definition:

```
manifest
  type=pvStatusDictionary
  version n=1
statuses
  inputStatuses
    0 s = Normal
    1 s = No power connected
    2 s = Higher volt input
    3 s = Input volt error
```

