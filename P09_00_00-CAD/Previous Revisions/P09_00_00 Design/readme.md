### Overview:
__Name:__ P09_00_00 CAD Design <br>
__Software Version:__ FreeCAD 0.15 <br>
__Notes:__ Design superseded by P09_00_01 <br>
__Comments:__ This design did not work well. The gears were not supported well and caused pinching which was too much friction for the servo. Additionally the design was somewhat restrictive in only being able to rotate 360 degrees.

### Description:
This design is the first iteration of P90_00_00. It calls for one SG90 servo to control the owl head movement and one micro stepper motor for the beacon motion. With additional gearing the servo action is extended to a full 360 degrees of motion. The timer setting are directly read from the servo potentiometer.  

### Files:
 * __Assembly:__ The parts aligned to check for interference
 * __BeaconLens:__ The red lens that covers the LED on top of the owl's head
 * __LEDMount:__ The mounting part that mates the stepper motor with the LED
 * __StepperMast:__ Part that holds the stepper motor vertically and mates to the BeaconBase to ensure the mast is centered
   * R2: Redesigned with a hallow center for passing wires though the BeaconBase and DriveGear  
 * __BeaconBase:__ Platform for beacon in the owl timer head
   * R2: Design modified for attaching directly to the drive gear. R1 design was flawed
 * __DriveGear:__ Main drive gear for owl head motion connected to servo motor in owl body
   * R2: Reduced the gear module
 * __ServoGear:__ Gear that is placed on servo head to drive the head action
   * R2: Reduced the gear module
 * __MainFrame:__ The main frame component where the servo is attached to the owl body
   * R2: Redesigned with the servo motor at an angle for better access and better component sizing
 * __DriveRetainer:__ Part for retaining the drive gear in the MainFrame
   * R2: Modified sizing on the DriveRetainer
 * __BottomPlate:__ Support plate for drive servo and other electronics. Goes in the bottom half of owl timer
   * R2: Simplified the design for less space
   * R3: Resized hole for servo. Fit is much better
