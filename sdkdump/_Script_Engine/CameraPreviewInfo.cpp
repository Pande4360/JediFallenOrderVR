#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimSequence.hpp"
#include "CameraPreviewInfo.hpp"
#include "Pawn.hpp"
void* _Script_Engine::CameraPreviewInfo::get_PawnClass() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::CameraPreviewInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CameraPreviewInfo");
    return result;
}
_Script_Engine::AnimSequence*& _Script_Engine::CameraPreviewInfo::get_AnimSeq() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x8);
}
_Script_Engine::Pawn*& _Script_Engine::CameraPreviewInfo::get_PawnInst() {
    return *(_Script_Engine::Pawn**)((uintptr_t)this + 0x28);
}
void* _Script_Engine::CameraPreviewInfo::get_Location() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::CameraPreviewInfo::get_Rotation() {
    return (void*)((uintptr_t)this + 0x1c);
}
