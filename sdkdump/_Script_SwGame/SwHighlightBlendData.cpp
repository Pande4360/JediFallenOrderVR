#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "SwHighlightBlendData.hpp"
_Script_Engine::CurveFloat*& _Script_SwGame::SwHighlightBlendData::get_BlendCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwHighlightBlendData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwHighlightBlendData");
    return result;
}
