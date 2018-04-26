# Chapter 1
## Suggestion for C++ Programmers:
- Use constructors to establish invariants (§2.4.3.2, §13.4, §17.2.1).
-  Use constructor/destructor pairs to simplify resource management (RAII; §5.2, §13.3).
-  Avoid ‘‘naked’’ new and delete (§3.2.1.2, §11.2.1).
-  Use containers and algorithms rather than built-in arrays and ad hoc code (§4.4, §4.5,
§7.4, Chapter 32).
- Prefer standard-library facilities to locally developed code (§1.2.4).
- Use exceptions, rather than error codes, to report errors that cannot be handled locally
(§2.4.3, §13.1).
- Use move semantics to avoid copying large objects (§3.3.2, §17.5.2).
- Use unique_ptr to reference objects of polymorphic type (§5.2.1).
- Use shared_ptr to reference shared objects, that is, objects without a single owner that is
responsible for their destruction (§5.2.1).
- Use templates to maintain static type safety (eliminate casts) and avoid unnecessary use
of class hierarchies (§27.2).