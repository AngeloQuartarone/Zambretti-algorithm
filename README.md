# Zambretti algorithm

This Zambretti algorithm is a C library that predicts weather conditions based on pressure trends and altitude. 

It utilizes Zambretti's algorithm to determine weather forecast using pressure trends and calculates weather conditions like "Settled Fine," "Rain at Frequent Intervals," and more.

## Usage

**WARNING: make sure to set the altitude to your location in the header file "zambretti.h" modifying the "ALTITUDE_M" constant.**

- `make`: Compile all files.
- `make run`: Run the example program.
- `make clean`: Clean the current directory from executable file.

I designed this files to be used as a library for other projects. 
This usage tips are only for example and testing.

## Files Included

- `example.c`: Contains an example of the Weather Forecast Application.
- `zambretti.h`: Header file containing constants and function declarations.
- `zambretti.c`: Source file implementing the Zambretti algorithm.
- `makefile`

## Contributing

Contributions to enhance or extend the functionality of this Weather Forecast Application are welcome. Feel free to fork this repository, make changes, and create a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

