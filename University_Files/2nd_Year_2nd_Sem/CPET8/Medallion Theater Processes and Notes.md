# Entities
1. User
2. Virtual Cashier
3. Admin

# Main Processes
1. Manage Bookings
	- 1.1. Receive Booking Request
	- 1.2. Checking Seat Availability
	- 1.3. Confirm Booking
	- 1.4. Update Booking Records
	- 1.5. Generating Price
	- 1.6. Sending Booking Confirmation
	- 1.7. Sending Price

2. Process Payments
	- 2.1. Accepting Online Payment
	- 2.2. Verify Payment Details
	- 2.3. Generate Online Receipt
	- 2.4. Process Refunds

3. Handle Cancellations
	- Receive Cancellation Request
	- Verify Cancellation Policy
	- Cancel Booking

4. Update Bus Schedules
	- Add New Bus Schedules
	- Modify Existing Schedules
	- Update Seat Availability

# Data Flows
- Booking Request ✅
- Online Payment ✅
- Booking Cancellation ✅
- Online Receipt ✅
- Booking Confirmation ✅
- Pricing ✅
- Bus Schedules ✅
- Seat Availability ✅
- Cancellation Notice ✅
- Updated Bus Schedules ✅
- Updated Booking Records ✅
- Updated Seat Availability ✅
- Booking Cancellation ✅
- Booking Confirmation ✅
- Cancellation Notice ✅
- Money Refund ✅
- Database Updates ✅
- Received Cancellation Request ✅

# New Data Flows
- Seat Availability 
- Confirmed Booking
- Booking Information
- Record Payment
- Payment Information

# Level 1 DFD
![[Pasted image 20250410094910.png]]

# Level 2 DFD Part 1
![[Pasted image 20250410094754.png]]

# Use Case Diagram Notes for Medallion Theatre
**Actors**:
1. User
2. Virtual Cashier
3. Admin

**Relationships**:
1. User
	a. Online Payment
	b. Booking 
	c. Cancellations

2. Virtual Cashier
	a. Online Payment
	b. Refunds (?)

3. Admin (Generalization of Virtual Cashier?)
	a. Update Booking Records
	b. Set Theatre Schedules
	c. Seat Availability
	d. Cancellation (?)