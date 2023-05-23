# CMake

## CLI
**Documentation :** https://cmake.org/cmake/help/latest/manual/cmake.1.html

### Generate a Project Buildsystem
```bash
cmake [<options>] -S <path-to-source> -B <path-to-build>
```
*Example*
```bash
cmake -S . -B ./build
```


### Build a Project
```bash
cmake --build <dir> [<options>] [-- <build-tool-options>]
```
*Example*
```bash
cmake --build build
```

According to the example the executable file path `./build/`