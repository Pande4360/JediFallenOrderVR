#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "TextRenderActor.hpp"
#include "TextRenderComponent.hpp"
_Script_Engine::TextRenderComponent*& _Script_Engine::TextRenderActor::get_TextRender() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_Engine::TextRenderActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TextRenderActor");
    return result;
}
