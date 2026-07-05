# Design Patterns

**What is a design pattern?** A design pattern is a proven, reusable solution to a problem that keeps coming up in software design. It is not a finished piece of code you drop in, but a template — a description of how objects and classes talk to each other — that you adapt to your own situation. Patterns give a team a shared vocabulary ("this is a Singleton", "that's a Factory") and capture the experience of designs that have worked well over time.

The classic catalog comes from the "Gang of Four" book (*Design Patterns: Elements of Reusable Object-Oriented Software*) and splits patterns into three families.

## The three types

### 1. Creational
Patterns about **how objects are created**. They hide the details of instantiation so the rest of the code doesn't depend on the exact class being built, making the system easier to extend and configure.

Examples: Singleton, Factory Method, Abstract Factory, Builder, Prototype.

### 2. Structural
Patterns about **how classes and objects are composed** into larger structures. They describe ways to assemble objects while keeping those structures flexible and efficient.

Examples: Adapter, Bridge, Composite, Decorator, Facade, Proxy, Flyweight.

### 3. Behavioral
Patterns about **how objects communicate and share responsibility**. They focus on the assignment of responsibilities between objects and how they interact at runtime.

Examples: Observer, Strategy, Command, State, Iterator, Template Method, Chain of Responsibility, Mediator, Visitor.

## Patterns in this repository

| Pattern | Type | Folder |
|---------|------|--------|
| Singleton | Creational | [`singleton/`](singleton/) |
