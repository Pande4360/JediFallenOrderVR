#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_GlobalData_Structs_Struct_CameraPOIVar\Struct_CameraPOIVar.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_SwGame {
struct R4PlayerController;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI {
#pragma pack(push, 1)
struct HC_CameraPOI_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x130]; public:
    void* get_UberGraphFrame();
    bool get_POIRunning();
    void set_POIRunning(bool value);
    bool get_CameraResetting();
    void set_CameraResetting(bool value);
    _Script_SwGame::R4PlayerController*& get_R4PlayerController();
    _Script_Engine::Actor*& get_FocusActor();
    void* get_POIName();
    float& get_BlendInTime();
    float& get_BlendOutTime();
    float& get_LookAtFocusDuration();
    float& get_FocusLockDuration();
    void* get_RightStickVector();
    void* get_LeftStickVector();
    float& get_StickTestValue();
    float& get_EndCameraThreshhold();
    void* get_POIReset();
    void* get_EnumToNameMap();
    bool get_isClimb();
    void set_isClimb(bool value);
    bool get_ShouldResetCameraOnEnd();
    void set_ShouldResetCameraOnEnd(bool value);
    void* get_DynamicRotationOffset();
    void* get_DynamicLocationOffset();
    void* get_VariableStruct();
    void* get_OnCameraPOIEnded();
    void* get_OnCameraPOIBegin();
    bool get_SetAutoDepthOfFieldTarget();
    void set_SetAutoDepthOfFieldTarget(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateLookAndMoveInput(float DeltaTime);
    void ResetBoolFlags();
    void ResetPOI();
    void SetLeftStickInput(float X_Axis, float Y_Axis);
    void SetRightStickInput(float X_Axis, float Y_Axis);
    void POITypeToName(void* POIType, void*& POIName);
    void InitializePOIValues(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar POIVariables);
    void EndCameraPOI();
    void ReceiveTick0(float DeltaSeconds);
    void ResetCamera();
    void ReceiveBeginPlay0();
    void StartCameraPOIwithVariables(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar& POIVariables);
    void StartCameraPOI();
    void CheckToAddClimbPOISet();
    void CheckToRemoveClimbPOISet();
    void StartCameraPOIByCameraMode(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar POIVariables, void* CameraMode);
    void ExecuteUbergraph_HC_CameraPOI(int32_t EntryPoint);
    void OnCameraPOIBegin__DelegateSignature();
    void OnCameraPOIEnded__DelegateSignature();
}; // Size: 0x2a0
#pragma pack(pop)
}
