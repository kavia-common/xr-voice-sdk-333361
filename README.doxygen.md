# xr-voice-sdk API Documentation

This documentation is generated from the public headers (and selected source) using **Doxygen**.

## Generate HTML docs

From the repository root:

```sh
doxygen Doxyfile
```

Then open:

- `build/docs/doxygen/html/index.html`

## Notes

- The Doxygen configuration focuses on the public C API headers under `src/` and excludes common private/internal header patterns (e.g. `*_private.h`).
- Graph generation uses Graphviz `dot` if installed (recommended).
