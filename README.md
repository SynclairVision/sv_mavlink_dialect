# sv_mavlink_dialect
SynclairVisions custom MAVLink dialect with generated C headers and a Python module.

## Layout
- `v.0.x/xml/sv_msg_defs.xml`: source XML for each dialect version.
- `v.0.x/generated/c`: header-only C implementation.
- `v.0.x/generated/python.py`: Python implementation.
- `docs.md`: extra notes/background.

Use the highest available version (currently `v.0.5`) unless you must match an older system.

## C headers
1. Copy `v.0.5/generated/c` into your project, or add it to your compiler include path.
2. Include the main header:
   ```c
   #include "sv_msg_defs/mavlink.h"
   ```
3. Build with the include path pointing to `generated/c`:
   ```sh
   gcc -I path/to/generated/c demo.c -o demo
   ```
   The code is header-only; no extra libraries are required.

### QGroundControl example
1. Ensure `qgroundcontrol/custom-example` is renamed to `qgroundcontrol/custom`.
2. In `qgroundcontrol/custom/cmake/CustomOverrides.cmake`, point CPM to the generated C root:
   ```cmake
   set(CPM_mavlink_SOURCE "/path/to/sv_mavlink_dialect/v.0.5/generated/c")
   ```
3. Rebuild QGC with your usual toolchain, e.g.:
   ```sh
   ~/Qt/<qt_version>/gcc_64/bin/qt-cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Debug
   cmake --build build --config Debug
   ./build/Debug/Custom-QGroundControl
   ```

## Python module
1. Copy `v.0.5/generated/python.py` into your project (you can rename it to `sv_mavlink.py`).
2. Make sure its directory is on `PYTHONPATH` (placing it next to your script works).
3. Import and use:
   ```python
   import sv_mavlink as mav  # if you renamed the file
   print("Dialect:", mav.DIALECT, "Wire:", mav.WIRE_PROTOCOL_VERSION)
   ```
