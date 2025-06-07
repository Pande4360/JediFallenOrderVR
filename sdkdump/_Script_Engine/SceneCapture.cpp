#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "SceneCapture.hpp"
#include "StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Script_Engine::SceneCapture::get_MeshComp() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_Engine::SceneCapture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SceneCapture");
    return result;
}
