#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CameraAnim.hpp"
#include "MatineeActor.hpp"
#include "MatineeActorCameraAnim.hpp"
_Script_Engine::CameraAnim*& _Script_Engine::MatineeActorCameraAnim::get_CameraAnim() {
    return *(_Script_Engine::CameraAnim**)((uintptr_t)this + 0x408);
}
_Script_CoreUObject::Class* _Script_Engine::MatineeActorCameraAnim::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MatineeActorCameraAnim");
    return result;
}
