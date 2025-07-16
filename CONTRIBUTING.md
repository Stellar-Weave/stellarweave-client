# Contributing to StellarWeave Client

First off, thanks for taking the time to contribute!

All types of contributions are encouraged and valued. See the [Table of Contents](#table-of-contents) for different ways to help and details about how this project handles them. Please make sure to read the relevant section before making your contribution. It will make it a lot easier for us maintainers and smooth out the experience for all involved. The community looks forward to your contributions.

And if you like the project, but just don't have time to contribute, that's fine. There are other easy ways to support the project and show your appreciation, which we would also be very happy about:
- Star the project
- Tweet about it
- Refer this project in your project's readme
- Mention the project at local meetups and tell your friends/colleagues

---

# Table of Contents

- [Contributing to StellarWeave Client](#contributing-to-stellarweave-client)
- [Project Structure](#project-structure)
- [Code of Conduct](#code-of-conduct)
- [I Have a Question](#i-have-a-question)
- [I Want To Contribute](#i-want-to-contribute)
- [Legal Notice](#legal-notice)
- [Reporting Bugs](#reporting-bugs)
  - [Before Submitting a Bug Report](#before-submitting-a-bug-report)
  - [How Do I Submit a Good Bug Report?](#how-do-i-submit-a-good-bug-report)
- [Suggesting Enhancements](#suggesting-enhancements)
  - [Before Submitting an Enhancement](#before-submitting-an-enhancement)
  - [How Do I Submit a Good Enhancement Suggestion?](#how-do-i-submit-a-good-enhancement-suggestion)
- [Making Your First Contribution](#making-your-first-contribution)
  - [File Headers and Copyright Notice](#file-headers-and-copyright-notice)
  - [Contribution Quality Standards](#contribution-quality-standards)
  - [Improving The Documentation](#improving-the-documentation)
  - [How to Contribute to Client Docs](#how-to-contribute-to-client-docs)
  - [Central Documentation](#central-documentation)
- [Styleguides](#styleguides)
  - [Key Conventions](#key-conventions)
    - [File Naming](#file-naming)
    - [Order of Includes](#order-of-includes)
    - [Naming Conventions](#naming-conventions)
    - [Comments](#comments)
    - [Tooling and Enforcement](#tooling-and-enforcement)
- [Commit Guidelines](#commit-guidelines)
  - [Commit Content Principles](#commit-content-principles)
  - [Commit Message Format](#commit-message-format)
- [License](#license)


---

## Project Structure

```
stellarweave-client/
├── .github/              # GitHub-specific configuration (CI/CD workflows, issue templates)
├── assets/               # Static assets (star textures, UI icons, fonts)
├── docs/                 # Client-specific documentation
├── include/              # Public include headers for the client's API
├── shaders/              # GLSL shader files
├── src/                  # Core source code, organized into modules
│   ├── engine/           # Core engine classes (renderer, scene graph, etc.)
│   ├── ui/               # UI logic and components
│   ├── input/            # Input handling (keyboard/mouse)
│   └── utils/            # Utility functions (math, logging)
├── .clang-format         # ClangFormat configuration for code style
├── .clang-tidy           # Clang-Tidy configuration for static analysis
├── .gitignore            # Specifies intentionally untracked files for Git
├── CMakeLists.txt        # Primary CMake build script
├── CODE_OF_CONDUCT.md    # Guidelines for community behavior
├── CONTRIBUTING.md       # Instructions for contributing to the project
├── LICENSE               # Licensing terms for the software
├── README.md             # Project overview, setup, and usage instructions
└── SECURITY.md           # Guidelines for reporting security vulnerabilities
```
## Code of Conduct

This project and everyone participating in it is governed by the
[Code of Conduct](CODE_OF_CONDUCT.md).
By participating, you are expected to uphold this code. Please report unacceptable behavior
to <stellarweave.dev@protonmail.com>.

## I Have a Question

> If you want to ask a question, we assume that you have read the available [Documentation](https://github.com/Stellar-Weave/stellarweave-docs/blob/main/README.md).

Before you ask a question, it is best to search for existing [Issues](/issues) that might help you. In case you have found a suitable issue and still need clarification, you can write your question in this issue. It is also advisable to search the internet for answers first.

If you then still feel the need to ask a question and need clarification, we recommend the following:

- Open an [Issue](/issues/new) with the **Support** label.
- Provide as much context as you can about what you're running into.
- Provide project and platform versions (nodejs, npm, etc), depending on what seems relevant.

We will then take care of the issue as soon as possible.

## I Want To Contribute

### Reporting Bugs

> You must never report security related issues, vulnerabilities or bugs including sensitive information to the issue tracker, or elsewhere in public. Check our [Security Policy](https://github.com/Stellar-Weave/stellarweave-client/security/policy) for information.

#### Before Submitting a Bug Report

A good bug report shouldn't leave others needing to chase you up for more information. Therefore, we ask you to investigate carefully, collect information and describe the issue in detail in your report. Please complete the following steps in advance to help us fix any potential bug as fast as possible.

- Make sure that you are using the latest version.
- Determine if your bug is really a bug and not an error on your side e.g. using incompatible environment components/versions (Make sure that you have read the [documentation](). If you are looking for support, you might want to check [this section](#i-have-a-question)).
- To see if other users have experienced (and potentially already solved) the same issue you are having, check if there is not already a bug report existing for your bug or error in the [bug tracker](issues?q=label%3Abug).
- Also make sure to search the internet (including Stack Overflow) to see if users outside of the GitHub community have discussed the issue.
- Collect information about the bug:
- Stack trace (Traceback)
- OS, Platform and Version (Windows, Linux, macOS, x86, ARM)
- Version of the interpreter, compiler, SDK, runtime environment, package manager, depending on what seems relevant.
- Possibly your input and the output
- Can you reliably reproduce the issue? And can you also reproduce it with older versions?


#### How Do I Submit a Good Bug Report?

We use GitHub issues to track bugs and errors. If you run into an issue with the project:

- Open an [Issue](/issues/new). (Since we can't be sure at this point whether it is a bug or not, we ask you not to talk about a bug yet and to label the issue as **Support** instead of **Bug**)
- Explain the behavior you would expect and the actual behavior.
- Please provide as much context as possible and describe the *reproduction steps* that someone else can follow to recreate the issue on their own. This usually includes your code. For good bug reports you should isolate the problem and create a reduced test case.
- Provide the information you collected in the previous section.

Once it's filed:

- The project team will change the label if necessary.
- A team member will try to reproduce the issue with your provided steps. If there are no reproduction steps or no obvious way to reproduce the issue, the team will ask you for those steps and mark the issue as `needs-repro`. Bugs with the `needs-repro` tag will not be addressed until they are reproduced.
- If the team is able to reproduce the issue, it will be marked `needs-fix`, as well as possibly other tags (such as `critical`), and the issue will be left to be [implemented by someone](#making-your-first-contribution).

### Suggesting Enhancements

This section guides you through submitting an enhancement suggestion for CONTRIBUTING.md, **including completely new features and minor improvements to existing functionality**. Following these guidelines will help maintainers and the community to understand your suggestion and find related suggestions.


#### Before Submitting an Enhancement

- Make sure that you are using the latest version.
- Read the [documentation]() carefully and find out if the functionality is already covered, maybe by an individual configuration.
- Perform a [search](/issues) to see if the enhancement has already been suggested. If it has, add a comment to the existing issue instead of opening a new one.
- Find out whether your idea fits with the scope and aims of the project. It's up to you to make a strong case to convince the project's developers of the merits of this feature. Keep in mind that we want features that will be useful to the majority of our users and not just a small subset. If you're just targeting a minority of users, consider writing an add-on/plugin library.


#### How Do I Submit a Good Enhancement Suggestion?

Enhancement suggestions are tracked as [GitHub issues](/issues).

- Use a **clear and descriptive title** for the issue to identify the suggestion.
- Provide a **step-by-step description of the suggested enhancement** in as many details as possible.
- **Describe the current behavior** and **explain which behavior you expected to see instead** and why. At this point you can also tell which alternatives do not work for you.
- You may want to **include screenshots and animated GIFs** which help you demonstrate the steps or point out the part which the suggestion is related to. You can use [this tool](https://www.cockos.com/licecap/) to record GIFs on macOS and Windows, and [this tool](https://github.com/colinkeenan/silentcast) or [this tool](https://github.com/GNOME/byzanz) on Linux. 
- **Explain why this enhancement would be useful** to most CONTRIBUTING.md users. You may also want to point out the other projects that solved it better and which could serve as inspiration.

### Making Your First Contribution

> ### Legal Notice 
> When contributing to this project, you must agree that you have authored 100% of the content, that you have the necessary rights to the content and that the content you contribute may be provided under the project license.

#### File Headers and Copyright Notice

When adding new source or header files, please include the following copyright header at the top of each file to ensure consistent licensing and legal clarity.

```cpp
// Copyright 2025 Jarif Junaeed
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
```

#### Contribution Quality Standards

We value meaningful contributions that improve the project. In order to maintain quality and focus, please note the following:

- **No vanity PRs**: Do not submit pull requests that only fix typos, adjust whitespace, reformat perfectly readable code, or make trivial changes that do not improve clarity or functionality.
- **Documentation contributions must be substantial**:
  - Clarifying confusing sections
  - Fixing factual inaccuracies
  - Adding important missing information
  - Improving examples to make them more useful
- If you are unsure whether a small change is meaningful enough, open an issue or discussion first before submitting a PR.
- Cosmetic-only PRs that do not improve clarity, functionality, or maintainability will likely be closed without merging.

#### Improving The Documentation
We welcome contributions that improve the documentation within this repository, especially around the client application’s technical details, usage, and development guides.

#### How to Contribute to Client Docs

- The client-specific documentation is primarily located in the `/docs` folder of this repository.
- Feel free to propose fixes, clarifications, expansions, or reorganizations to improve clarity and usefulness.
- When submitting documentation changes, please follow the same quality standards outlined in [Making Your First Contribution](#making-your-first-contribution).
- Use clear language and include examples or diagrams when helpful.
- If you are unsure about the scope of a documentation change, consider opening an issue first to discuss.

#### Central Documentation

For contributions related to the central project-wide documentation, visit the [StellarWeave Docs repository](https://github.com/Stellar-Weave/stellarweave-docs). This repository’s documentation contributions should be focused on client-specific content only.

## Styleguides

Consistent style helps us maintain readable, maintainable, and high-quality code. Please follow these conventions when contributing.

We use C++20 and follow the **[Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)**. We listed some of the key conventions below for convenience, but it is recommended that you read the linked style guide for more clarity.

### Key Conventions

#### File Naming

- **C++ source files** should end with `.cc`  
- **Header files** should end with `.h`  
- **File names** should be all lowercase, with underscores (`_`) as separators  
- **Example**: `my_useful_class.cc`

#### Order of Includes

Includes should be ordered as follows (each group separated by a blank line):

1. **Related header**: The primary header associated with the current source file (e.g., `foo.h` for `foo.cc`)
2. **C system headers**: (e.g., `<unistd.h>`)
3. **C++ standard library headers**: (e.g., `<vector>`, `<string>`)
4. **Other libraries' headers**: (e.g., `<boost/foo.hpp>`, `<gtest/gtest.h>`)
5. **Your project's headers**: (e.g., `"my_project/my_header.h"`)

All includes within a group should be **sorted alphabetically**.

#### Naming Conventions

- **Type Names** (classes, structs, enums, typedefs, type aliases): Use `UpperCamelCase` with no underscores.  
  - *Example*: `MyUsefulClass`, `HttpRequest`, `ColorMap`

- **Variable Names**: Use `snake_case`.  
  - *Example*: `my_variable`, `total_count`  
  - **Class member variables** should have a trailing underscore (`_`).  
    - *Example*: `my_member_variable_`, `connection_data_`  
  - **Global variables** are generally discouraged. If absolutely necessary, use `snake_case` with no special prefix.

- **Constant Names**: Declared `constexpr` or `const` and fixed for the program's duration. Start with `k` followed by `UpperCamelCase`.  
  - *Example*: `kMyConstant`, `kMaxRetries`, `kDefaultBufferSize`

- **Function Names**: Use `UpperCamelCase` for regular (member and free) functions.  
  - *Example*: `MyFunction()`, `ProcessData()`, `CalculateSum()`

#### Comments

- Use `//` for most comments.
- Use `/* ... */` for:
  - Deprecated code
  - Temporarily commenting out blocks
  - Documentation (e.g., Doxygen)
- **Header files** should include a comment describing the purpose of the class/struct/enum declared within.
- **Public functions** should have comments describing their purpose, parameters, and return values (typically above the function declaration in the header).

#### Tooling and Enforcement
We use ``clang-format`` for automatic formatting and ``clang-tidy`` for code quality and static analysis. Configuration files (.clang-format, .clang-tidy) are provided in the repository.

Before submitting a Pull Request, you must run both tools.

1. Formatting (``clang-format``): This command will automatically format your code to match our style.

```Bash
clang-format -i src/**/*.cc src/**/*.h include/**/*.h
```
2. Static Analysis(``clang-tidy``): This command checks for bugs, performance issues, and convention violations. You must run a build first to generate the compile_commands.json file.

```bash
# Assumes compile_commands.json is in a 'build' directory
clang-tidy -p build/ src/**/*.cc src/**/*.h include/**/*.h
```
Many IDEs offer excellent integrations for these tools, which we highly recommend using to get real-time feedback as you code.

> If in doubt, follow the conventions used in existing code within `src/`.

## Commit Guidelines

A clean, readable, and well-structured commit history is essential for project maintainability and collaboration. Please follow the guidelines below when making commits.

### Commit Content Principles

These rules focus on **what** you commit.

#### ✅ Atomic Commits (Strongly Recommended)

Each commit should represent a single, logical, self-contained change.

**Do:**
- Keep features, fixes, and refactors in separate commits.
- Ensure each commit is complete and builds successfully on its own.
- Split large changes into logically distinct steps when possible.

**Don't:**
- Mix unrelated changes (e.g., a bugfix, a new feature, and whitespace cleanups) in one commit.
- Leave a commit in a broken or partially functional state.

>⚠️ We understand perfect atomicity isn’t always practical. If your change can't be easily split, make sure:
>- Each commit still builds and passes tests.
>- Commits are logically grouped and explained clearly in your PR or commit body.

#### ✅ Each Commit Must Build Independently

This ensures that tools like `git bisect` work reliably and that our history remains debuggable. Every commit should be buildable and, if relevant, testable on its own.

#### 🚫 No Temporary Code or Debug Statements

Before committing, remove any:
- Print/debug statements
- Temporary files or `TODO` code
- Commented-out code

Your commits should reflect only the intended final changes.

### Commit Message Format

To keep the history readable and searchable, we follow a simplified convention:

#### Format

```
<type>: <short summary>

[optional longer description]

[optional footer]
```

---

#### Subject Line

* **Type prefix** – categorize the change:

  * `feat`: New feature
  * `fix`: Bug fix
  * `docs`: Documentation changes
  * `refactor`: Internal code change that doesn’t add a feature or fix a bug
  * `test`: Adding or fixing tests
  * `style`: Code formatting or stylistic change (no logic change)
  * `chore`: CI setup, tooling, etc.
* **Imperative mood** – e.g. “Add login check” *not* “Added login check” or “Adds login check”
* **Length** – keep under 50 characters
* **No trailing period**

**Examples**

```
feat: Add frustum culling to renderer
fix: Prevent crash on empty vertex buffer
docs: Clarify camera calibration config instructions
refactor: Simplify transform hierarchy traversal
```

---

#### Optional Body

Use the body to explain:

* What problem you’re solving

* Why your approach was chosen

* Any notable side effects or caveats

* Wrap at 72 characters per line

* Separate from the subject with a blank line

**Example**

```
fix: Handle null texture in sprite renderer

Null textures were causing a segmentation fault during draw calls.
This adds a fallback 1x1 pixel texture for safe default rendering.
```

---

#### Optional Footer

Use the footer to reference issues or add metadata:

```
Closes #47
Fixes #103
```

---

🎯 Your pull request should ideally contain clean, logical commits. If your PR has too many noisy or partial commits, we may ask you to squash or reorganize them before merge.


## License

This project is licensed under the Apache 2.0 License. See the [License](./LICENSE) file for details.

---

*Thank you for helping build StellarWeave!*
