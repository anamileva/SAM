/*
BSD 3-Clause License

Copyright (c) Alliance for Sustainable Energy, LLC. See also https://github.com/NREL/SAM/blob/develop/LICENSE
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its
   contributors may be used to endorse or promote products derived from
   this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/


#ifndef __CombineCasesDialog_h
#define __CombineCasesDialog_h

#include <wx/dialog.h>


class wxCheckListBox;
class wxCheckbox;
class wxSpinCtrlDouble;

class CombineCasesDialog : public wxDialog
{

public:
    CombineCasesDialog(wxWindow* parent, const wxString& title, lk::invoke_t& cxt);
	int GetResultCode() {
		return m_result_code;
	};

	struct CaseInfo
	{
		wxString name; // dataset - e.g. psm
		wxString display_name;
		bool is_visible;
		bool is_selected;
		CaseInfo(wxString& _n, wxString& _dn)
			: name(_n), display_name(_dn)
		{
			is_visible = true;
			is_selected = false;
		}
	};

private:
    void OnEvt(wxCommandEvent &);

    void RefreshList(size_t first_item);

	void GetOpenCases();

	bool HasContingency(Simulation& bcsim);

	int m_result_code;
	Case* m_custom_generation_case;
	wxString m_custom_generation_case_name;
	CaseWindow* m_custom_generation_case_window;
	std::vector<double> m_generic_degradation;
    std::vector<CaseInfo> m_cases;
    wxCheckListBox* m_chlCases;
    wxCheckBox* m_chkOverwriteCapital;
    wxSpinCtrlDouble* m_spndDegradation;
	AFSchedNumeric* m_schnDegradation;

    DECLARE_EVENT_TABLE()
};


#endif
