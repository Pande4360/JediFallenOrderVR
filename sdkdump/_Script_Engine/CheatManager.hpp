#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_Engine {
struct DebugCameraController;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CheatManager : public _Script_CoreUObject::Object {
    private: char pad_28[0x50]; public:
    _Script_Engine::DebugCameraController*& get_DebugCameraControllerRef();
    void* get_DebugCameraControllerClass();
    static _Script_CoreUObject::Class* static_class();
    void Walk();
    void ViewSelf();
    void ViewPlayer(void* S);
    void ViewClass(void* DesiredClass);
    void ViewActor(void* ActorName);
    void UpdateSafeArea();
    void UnpauseLevelStreaming();
    void ToggleStreamingFailsafeTestMode();
    void ToggleServerStatReplicatorUpdateStatNet();
    void ToggleServerStatReplicatorClientOverwrite();
    void ToggleDebugCamera();
    void ToggleAILogging();
    void TestCollisionDistance();
    void Teleport();
    void Summon(void* ClassName);
    void StreamLevelOut(void* PackageName);
    void StreamLevelIn(void* PackageName);
    void SpawnServerStatReplicator();
    void Slomo(float NewTimeDilation);
    void SetWorldOrigin();
    void SetStreamingFailsafeTestMode(bool bEnable);
    void SetMouseSensitivityToDefault();
    void ServerToggleAILogging();
    void ReceiveInitCheatManager();
    void ReceiveEndPlay();
    void PlayersOnly();
    void PauseLevelStreaming();
    void OnlyLoadLevel(void* PackageName);
    void LogStreamingLevels();
    void LogLoc();
    void InvertMouse();
    void God();
    void Ghost();
    void FreezeFrame(float Delay);
    void Fly();
    void FlushLog();
    void EnableDebugCamera();
    void DumpVoiceMutingState();
    void DumpStreamingLevelsMemoryInfo();
    void DumpPartyState();
    void DumpOnlineSessionState();
    void DumpLevelMemoryInfo(void* LevelName);
    void DumpChatState();
    void DisableDebugCamera();
    void DestroyTarget();
    void DestroyServerStatReplicator();
    void DestroyPawns(void* aClass);
    void DestroyAllPawnsExceptTarget();
    void DestroyAll(void* aClass);
    void DebugCapsuleSweepSize(float HalfHeight, float Radius);
    void DebugCapsuleSweepPawn();
    void DebugCapsuleSweepComplex(bool bTraceComplex);
    void DebugCapsuleSweepClear();
    void DebugCapsuleSweepChannel(void* Channel);
    void DebugCapsuleSweepCapture();
    void DebugCapsuleSweep();
    void DamageTarget(float DamageAmount);
    void ClearLevelStreamingStatus(void* PackageName);
    void CheatScript(void* ScriptName);
    void ChangeSize(float F);
    void BugItStringCreator(_Script_CoreUObject::Vector ViewLocation, _Script_CoreUObject::Rotator ViewRotation, void*& GoString, void*& LocString);
    void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
    void BugIt(void* ScreenShotDescription);
}; // Size: 0x78
#pragma pack(pop)
}
