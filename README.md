# VaultDB

# VaultDB

**A database engine built from the ground up in C.**

VaultDB is a database engine project focused on the fundamentals of data storage and retrieval. It is designed as a library that other programs can integrate directly, with an emphasis on understanding and implementing the data structures and algorithms that power database systems.

The current focus is on core storage and indexing.

## Project Goals

- Build a database engine from the ground up.
- Implement fundamental data storage and retrieval mechanisms.
- Support basic data manipulation operations.
- Develop indexing mechanisms for efficient data lookup.
- Keep the engine usable as a library by other applications.
- Prioritize correctness, predictable behavior, and testability.

## Current Status

VaultDB is under active development.

The current development focus is the storage engine and indexing. Features and interfaces may change as the implementation evolves.

## Development

VaultDB is a personal weekend project developed alongside [Vault](https://github.com/Thimmy962/vault), my programming language project.

Development focuses on building a database engine from the ground up in C, with an emphasis on core storage mechanisms, indexing, and understanding the internals of database systems.

VaultDB is a work in progress, and its design and implementation will evolve as development continues.

## Features

The following list tracks the project's core capabilities. Update each item as its implementation and tests are completed.

- [ ] Core storage engine
- [ ] Create, read, update, and delete (CRUD) operations
- [ ] Persistent data storage
- [ ] Index creation and maintenance
- [ ] Indexed lookups
- [ ] Automated tests for storage and indexing

**Note:** This checklist represents the intended scope, not a claim that every feature is already implemented.

## Design Scope

VaultDB focuses on the internal mechanisms responsible for storing and retrieving data.

### Storage Engine

The storage engine manages the representation and organization of stored data.

Its responsibilities include the underlying storage structures and the mechanisms used to access and modify stored records.

The exact storage format and allocation strategy will be documented as the implementation stabilizes.

### Data Operations

The engine is intended to support the fundamental operations required to manage data:

- **Create:** Add new data.
- **Read:** Retrieve existing data.
- **Update:** Modify existing data.
- **Delete:** Remove existing data.

The behavior and public interfaces of these operations will be documented once finalized.

### Indexing

Indexing is a core focus of VaultDB.

An index provides an additional data structure that helps locate records without necessarily scanning the entire dataset. Its purpose is to improve lookup efficiency while maintaining consistency with the underlying stored data.

The index structure, supported key types, lookup complexity, and index-maintenance rules will be documented once established by the implementation.

## Library Interface

VaultDB is designed to be used as a C library rather than requiring applications to communicate with a standalone database server.

The intended integration model is for a C application to link against VaultDB and use its public interface to interact with stored data.

Details such as initialization, database handles, record representation, error handling, and resource cleanup will be documented when the public API is established.

## Building

Build instructions will be added once the project's build system and supported toolchain are finalized.

**Build system:** [Placeholder — e.g., Make, CMake, or another build system]

**Compiler requirements:** [Placeholder — supported C standard and compiler versions]

## Usage

A working usage example will be provided once the public library interface is established.

The example will demonstrate how to initialize the library, open or create a database, perform basic data operations, and release resources using the actual VaultDB API.

## Testing

Testing is important for validating the correctness of the storage engine and its indexes.

The test suite should cover:

- Basic storage and retrieval operations.
- Updating and deleting existing records.
- Missing records and invalid inputs.
- Empty and boundary-case datasets.
- Index creation, lookup, and maintenance.
- Consistency between indexed lookups and the underlying stored data.
- Repeated operations and resource management.

These are testing objectives; the implemented test coverage will be documented as the suite develops.

**Test instructions:** [Placeholder — add the actual test command.]

## Reliability and Limitations

VaultDB is a work in progress and is not yet claimed to be production-ready.

Its durability guarantees, crash behavior, concurrency support, transaction semantics, and recovery mechanisms must be established and tested before they can be relied upon.

Until those properties are explicitly implemented and verified, applications should not assume that VaultDB provides them.

## Contributing

Contributions, suggestions, and bug reports are welcome.

For substantial changes, discuss the proposed design before implementation so that the storage engine and indexing mechanisms remain consistent with the project's goals.

## License

[Placeholder — specify the project's license.]


