<!--
*** This readme was adapted from Best-README-Template.
  https://github.com/othneildrew/Best-README-Template
-->

<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
<div align="left">

[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]

</div>

<a href="https://github.com/Kaweees/kiwiLang">
  <img alt="C++ Logo" src="assets/img/cpp.svg" align="right" width="150">
</a>

<div align="left">
  <h1><em><a href="https://github.com/Kaweees/kiwiLang">~kiwiLang</a></em></h1>
</div>

<!-- ABOUT THE PROJECT -->

A template for creating C++ header-only libraries accelerated with CUDA/Apple Metal

### Built With

[![C++][C++-shield]][C++-url]
[![NixOS][NixOS-shield]][NixOS-url]
[![CMake][CMake-shield]][CMake-url]
[![GNU Make][GNU-Make-shield]][GNU-Make-url]
[![Codecov][Codecov-shield]][Codecov-url]
[![GitHub Actions][github-actions-shield]][github-actions-url]

<!-- PROJECT PREVIEW -->
## Preview

<p align="center">
  <img src="assets/img/demo.mp4"
  width = "80%"
  alt = "Video demonstration"
  />
</p>

<!-- GETTING STARTED -->
## Getting Started

### Prerequisites

Before attempting to build this project, make sure you have [GNU Make](https://www.gnu.org/software/make/), and [CMake](https://cmake.org) installed on your machine. These can be also installed via the project's [Nix](https://nixos.org/download.html) environment.

Additionally, if you wish to utilize the GPU acceleration features, you will need to have the [CUDA Toolkit](https://developer.nvidia.com/cuda-downloads) or [Apple Metal](https://developer.apple.com/metal/cpp/) installed on your machine.

### Installation

To get a local copy of the project up and running on your machine, follow these simple steps:

1. Clone the project repository

   ```sh
   git clone https://github.com/Kaweees/kiwiLang.git
   cd kiwiLang
   ```

2. Install the project dependencies

   ```sh
   nix-shell
   ```

3. Create a fresh build directory and navigate to it

   ```sh
   just clean build
   ```

<!-- PROJECT FILE STRUCTURE -->
## Project Structure

```sh
graphics/
├── .github/                       - GitHub Actions CI/CD workflows
├── include/                       - project header files
├── src/                           - project source files
│   └── main.c                     - Entry point, main function
├── CMakeLists.txt                 - CMake build script
├── LICENSE                        - project license
└── README.md                      - you are here
```

## License

The source code for this project is distributed under the terms of the GNU General Public License v3.0, as I firmly believe that collaborating on free and open-source software fosters innovations that mutually and equitably beneficial to both collaborators and users alike. See [`LICENSE`](./LICENSE) for details and more information.

<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->

[contributors-shield]: https://img.shields.io/github/contributors/Kaweees/kiwiLang.svg?style=for-the-badge
[contributors-url]: https://github.com/Kaweees/kiwiLang/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/Kaweees/kiwiLang.svg?style=for-the-badge
[forks-url]: https://github.com/Kaweees/kiwiLang/network/members
[stars-shield]: https://img.shields.io/github/stars/Kaweees/kiwiLang.svg?style=for-the-badge
[stars-url]: https://github.com/Kaweees/kiwiLang/stargazers

<!-- MARKDOWN SHIELD BAGDES & LINKS -->
<!-- https://github.com/Ileriayo/markdown-badges -->
[C++-shield]: https://img.shields.io/badge/C++-%23008080.svg?style=for-the-badge&logo=c%2B%2B&logoColor=004482&labelColor=222222&color=004482
[C++-url]: https://isocpp.org/
[NixOS-shield]: https://img.shields.io/badge/NIX-%23008080.svg?style=for-the-badge&logo=NixOS&logoColor=5277C3&labelColor=222222&color=5277C3
[NixOS-url]: https://nixos.org/
[CMake-shield]: https://img.shields.io/badge/CMake-%23008080.svg?style=for-the-badge&logo=cmake&logoColor=008FBA&labelColor=222222&color=008FBA
[CMake-url]: https://cmake.org/
[Codecov-shield]: https://img.shields.io/badge/codecov-%23008080.svg?style=for-the-badge&logo=codecov&logoColor=FF0077&labelColor=222222&color=FF0077
[GNU-Make-shield]: https://img.shields.io/badge/GNU%20Make-%23008080.svg?style=for-the-badge&logo=gnu&logoColor=A42E2B&labelColor=222222&color=A42E2B
[GNU-Make-url]: https://www.gnu.org/software/make/
[Codecov-url]: https://codecov.io/
[github-actions-shield]: https://img.shields.io/badge/github%20actions-%232671E5.svg?style=for-the-badge&logo=githubactions&logoColor=2671E5&labelColor=222222&color=2671E5
[github-actions-url]: https://github.com/features/actions