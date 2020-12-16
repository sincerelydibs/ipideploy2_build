#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.Void iPiMocap.CharacterAnimator::Update()
extern void CharacterAnimator_Update_m2C086907FB75BC83855D13BFA2EE5C8C9634AFB5 (void);
// 0x00000002 System.Void iPiMocap.CharacterAnimator::UpdateRootJoint(System.String)
extern void CharacterAnimator_UpdateRootJoint_mA27A3B8ADAE4AC1491AEFC5C57511BA4F849D658 (void);
// 0x00000003 UnityEngine.Transform iPiMocap.CharacterAnimator::FindJointRecursive(UnityEngine.Transform,System.String,System.Boolean)
extern void CharacterAnimator_FindJointRecursive_mC269D6B5EC82E283C9432228700D62EE455D521E (void);
// 0x00000004 System.Void iPiMocap.CharacterAnimator::.ctor()
extern void CharacterAnimator__ctor_m12B769E429CFF2B236AE0306B73A09B74EA9C5DD (void);
// 0x00000005 iPiMocap.Pose iPiMocap.MocapStudioClient::FetchNextPose()
extern void MocapStudioClient_FetchNextPose_mE17320B00B12AAB1FC1A2D56B3412DFFB2167484 (void);
// 0x00000006 iPiMocap.Pose iPiMocap.MocapStudioClient::FetchLatestPose()
extern void MocapStudioClient_FetchLatestPose_m6C2A2DF017D4C3C05098726E5B1E6D5530CC5488 (void);
// 0x00000007 System.Void iPiMocap.MocapStudioClient::Start()
extern void MocapStudioClient_Start_m5DCCABA4033C3F0CBC69DD34CC045F64F5B56957 (void);
// 0x00000008 System.Void iPiMocap.MocapStudioClient::OnDestroy()
extern void MocapStudioClient_OnDestroy_m6054C16B23ADA2975C9A83A2A4EE21DBE818B934 (void);
// 0x00000009 System.Void iPiMocap.MocapStudioClient::ReceivePackets()
extern void MocapStudioClient_ReceivePackets_mCE165CA7F294FAD6FC80F6FEC1DF315FC6F97BE5 (void);
// 0x0000000A System.Void iPiMocap.MocapStudioClient::HandlePacket(System.Byte[])
extern void MocapStudioClient_HandlePacket_mE92B9866A5AA5AF17241CEF6DFE1102DAB45DF8B (void);
// 0x0000000B System.Nullable`1<System.Int32> iPiMocap.MocapStudioClient::GetPacketKind(System.Byte[])
extern void MocapStudioClient_GetPacketKind_mE6E373873D5231EDDD8A5AF5B471F0D9366C1808 (void);
// 0x0000000C iPiMocap.Pose iPiMocap.MocapStudioClient::GetPoseFromPacket(System.Byte[])
extern void MocapStudioClient_GetPoseFromPacket_mD25837EEEFF8B786C600FF810BBF9E0EB602C020 (void);
// 0x0000000D System.String[] iPiMocap.MocapStudioClient::GetRotationNamesFromPacket(System.Byte[])
extern void MocapStudioClient_GetRotationNamesFromPacket_m021EDCD57B3E622D2C492850219F2CC64DA5E538 (void);
// 0x0000000E System.IO.BinaryReader iPiMocap.MocapStudioClient::CreateReaderForPacket(System.Byte[])
extern void MocapStudioClient_CreateReaderForPacket_mD78851F86BA7814D69F74363D4B067D08ECDCDD1 (void);
// 0x0000000F System.Void iPiMocap.MocapStudioClient::.ctor()
extern void MocapStudioClient__ctor_mC411BB7E600D1D8A538DEF07F420F5FDBBDE504D (void);
// 0x00000010 System.Void iPiMocap.MocapStudioClient::.cctor()
extern void MocapStudioClient__cctor_m8441A71AE6E2011145986D83DD86D30839A06E00 (void);
// 0x00000011 System.Void iPiMocap.Pose::.ctor()
extern void Pose__ctor_m7CB99ABC42DF9CA29ED408F50B9FD671A232C73B (void);
static Il2CppMethodPointer s_methodPointers[17] = 
{
	CharacterAnimator_Update_m2C086907FB75BC83855D13BFA2EE5C8C9634AFB5,
	CharacterAnimator_UpdateRootJoint_mA27A3B8ADAE4AC1491AEFC5C57511BA4F849D658,
	CharacterAnimator_FindJointRecursive_mC269D6B5EC82E283C9432228700D62EE455D521E,
	CharacterAnimator__ctor_m12B769E429CFF2B236AE0306B73A09B74EA9C5DD,
	MocapStudioClient_FetchNextPose_mE17320B00B12AAB1FC1A2D56B3412DFFB2167484,
	MocapStudioClient_FetchLatestPose_m6C2A2DF017D4C3C05098726E5B1E6D5530CC5488,
	MocapStudioClient_Start_m5DCCABA4033C3F0CBC69DD34CC045F64F5B56957,
	MocapStudioClient_OnDestroy_m6054C16B23ADA2975C9A83A2A4EE21DBE818B934,
	MocapStudioClient_ReceivePackets_mCE165CA7F294FAD6FC80F6FEC1DF315FC6F97BE5,
	MocapStudioClient_HandlePacket_mE92B9866A5AA5AF17241CEF6DFE1102DAB45DF8B,
	MocapStudioClient_GetPacketKind_mE6E373873D5231EDDD8A5AF5B471F0D9366C1808,
	MocapStudioClient_GetPoseFromPacket_mD25837EEEFF8B786C600FF810BBF9E0EB602C020,
	MocapStudioClient_GetRotationNamesFromPacket_m021EDCD57B3E622D2C492850219F2CC64DA5E538,
	MocapStudioClient_CreateReaderForPacket_mD78851F86BA7814D69F74363D4B067D08ECDCDD1,
	MocapStudioClient__ctor_mC411BB7E600D1D8A538DEF07F420F5FDBBDE504D,
	MocapStudioClient__cctor_m8441A71AE6E2011145986D83DD86D30839A06E00,
	Pose__ctor_m7CB99ABC42DF9CA29ED408F50B9FD671A232C73B,
};
static const int32_t s_InvokerIndices[17] = 
{
	23,
	26,
	185,
	23,
	14,
	14,
	23,
	23,
	23,
	26,
	1464,
	28,
	0,
	0,
	23,
	3,
	23,
};
extern const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationAssemblyU2DCSharp;
extern const Il2CppCodeGenModule g_AssemblyU2DCSharpCodeGenModule;
const Il2CppCodeGenModule g_AssemblyU2DCSharpCodeGenModule = 
{
	"Assembly-CSharp.dll",
	17,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	&g_DebuggerMetadataRegistrationAssemblyU2DCSharp,
};
