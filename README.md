# cxb
cxb is a console based tool to check bits in a hex string.

# Parameters
cxb &lt;hex&gt; &lt;bitindex&gt; &lt;bitvalue&gt;

| Parameter  | Description |
| ---------- | ----------- |
| hex        | The hex string to be checked. The string can begin with "0x" but it is not required |
| bitindex   | The bit that should be checked. The Index starts by 0 |
| bitvalue   | Checks the bit against this value ( 0 or 1 ) |

# Example
cxb "4df65047" 3 1

# Errorcodes
| Errorcode | Description |
| --------- | ----------- |
| 0         | Everything is ok. The bit matches the specified bitvalue |
| 1         | Unknown Error. Maybe wrong arguments |
| 2         | The Bit does not match the specified bit value |
