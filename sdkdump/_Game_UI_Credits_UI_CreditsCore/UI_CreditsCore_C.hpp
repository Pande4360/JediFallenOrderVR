#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct ScrollBox;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Credits_UI_CreditsCore {
#pragma pack(push, 1)
struct UI_CreditsCore_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x118]; public:
    void* get_UberGraphFrame();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_0();
    _Script_UMG::ScrollBox*& get_EndCredits_ScrollBox();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::ScrollBox*& get_MenuCredits_ScrollBox();
    _Script_Engine::DataTable*& get_UIStringsDataTable();
    int32_t& get_DataTableCounter();
    void* get_CurrentFormat();
    void* get_CurrentTitle();
    void* get_BlankTitle();
    void* get_PreviousTitle();
    void* get_CreditsTitle();
    void* get_CreditsName();
    void* get_SubstituteTitle();
    void* get_ColumnizedName1();
    void* get_ColumnizedName2();
    void* get_ColumnizedName3();
    bool get_ExitColumnizedNames();
    void set_ExitColumnizedNames(bool value);
    float& get_Scrolling();
    void* get_E_CreditsScrollCompleted();
    bool get_IsEndCredits();
    void set_IsEndCredits(bool value);
    float& get_ScrollRate();
    float& get_FastForward();
    static _Script_CoreUObject::Class* static_class();
    void Construct();
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void Destruct();
    void StartEndCredits();
    void StartMenuCredits();
    void SkipCredits(void* ActionName);
    void ExecuteUbergraph_UI_CreditsCore(int32_t EntryPoint);
    void E_CreditsScrollCompleted__DelegateSignature();
}; // Size: 0x720
#pragma pack(pop)
}
