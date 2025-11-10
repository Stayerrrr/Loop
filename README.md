# Programming Assignment Collection

This repository contains two C programming assignments that demonstrate fundamental programming concepts including loops, conditional statements, and user input handling.

## 📁 Assignment Files

### 1. Shopping Cart Calculator (`codelab.c`)

A program that calculates the total shopping cost with dynamic discount application based on purchase amount.

#### Features:
- **Dynamic Input**: Continuously accepts product prices until user enters 0 or negative value
- **Input Validation**: Handles non-numeric inputs gracefully with error messages
- **Tiered Discount System**:
  - > Rp 2,000,000 → 50% discount
  - > Rp 1,000,000 → 35% discount  
  - > Rp 500,000 → 10% discount
- **Detailed Receipt**: Displays pre-discount total, discount amount, and final price

#### Usage:
```bash
gcc codelab.c -o shopping_cart
./shopping_cart

```

### 2. Machine Temperature Monitor (codelab2.c)

A safety monitoring system that tracks machine temperatures and triggers alerts for dangerous conditions.

#### Features:
  - **Configurable Monitoring**: User specifies number of temperature readings
  - **Safety Validation:**: 
      - > Rejects negative temperatures (invalid data)
      - > Triggers emergency shutdown for temperatures ≥100°C  
      - > Reports normal temperatures (0°C - 99.99°C)

  - **Early Termination**: Stops monitoring immediately upon detecting dangerous conditions
  - **Safety Summary**: Provides final status report after monitoring completes

  #### Usage:
```bash
gcc codelab2.c -o temperature_monitor
./temperature_monitor
```

## 🛠️ Technical Details
  ### Common Features:
   - Written in C programming language

   - Robust input handling and validation

   - Clear user prompts and formatted output

  -  Error handling for edge cases

  ### 📋 Learning Objectives
  These assignments demonstrate:
   - Control structures (while/for loops, if-else statements)
   - User input handling and validation
   - Mathematical operations and calculations
   - Program flow control (break, continue)
   - Real-world problem solving approaches


 
