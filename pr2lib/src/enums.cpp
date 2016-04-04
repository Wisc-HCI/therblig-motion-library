
/*
This enum is to help with sending replies to the server. Normally,
after each action, the server sends a time stamp to the client. However,
if there are errors, IK, invalid request, etc, the server will instead send a negative value 
as one of the enums in the list
*/
enum ServerResponses{
	InvalidIKSolution = -1,

	InvalidCheck = -2,

	TransportLoadedEmptyHand = -3,

	TransportEmptyObjectInHand = -4,
	TransportEmptyInvalidOrientation = -6,
	TransportEmptyInvalidAngle = -8,

	UnimplementedCase = -9,

	GraspAlreadyHoldingObject = -10,

	PositionInvalidOrientation = -11,
	PositionInvalidAngle = -12,

	ReleaseLoadNoObject = -13,

	InvalidObjectIndex = -14,
	InvalidPlaceIndex = -15,

	InvalidMessageType = -16
};

