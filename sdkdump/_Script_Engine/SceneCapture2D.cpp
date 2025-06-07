#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SceneCapture.hpp"
#include "SceneCapture2D.hpp"
#include "SceneCaptureComponent2D.hpp"
_Script_Engine::SceneCaptureComponent2D*& _Script_Engine::SceneCapture2D::get_CaptureComponent2D() {
    return *(_Script_Engine::SceneCaptureComponent2D**)((uintptr_t)this + 0x368);
}
void _Script_Engine::SceneCapture2D::OnInterpToggle(bool bEnable) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::SceneCapture2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SceneCapture2D");
    return result;
}
