#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "FontFaceInterface.hpp"
_Script_CoreUObject::Class* _Script_SlateCore::FontFaceInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SlateCore.FontFaceInterface");
    return result;
}
