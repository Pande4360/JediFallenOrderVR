#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SceneCapture.hpp"
#include "SceneCaptureComponentCube.hpp"
#include "SceneCaptureCube.hpp"
_Script_Engine::SceneCaptureComponentCube*& _Script_Engine::SceneCaptureCube::get_CaptureComponentCube() {
    return *(_Script_Engine::SceneCaptureComponentCube**)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Script_Engine::SceneCaptureCube::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SceneCaptureCube");
    return result;
}
void _Script_Engine::SceneCaptureCube::OnInterpToggle(bool bEnable) {
    return;
}
