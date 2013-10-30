/*
    Copyright (C) 2013 Robert Valentak <robert@sapiens.si>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef __MainFrame__
#define __MainFrame__

/**
@file
Subclass of baseMainFrame, which is generated by wxFormBuilder.
*/

#include "FeatherUI.h"

//// end generated include

/** Implementing baseMainFrame */
class MainFrame : public baseMainFrame
{
	protected:
		// Handlers for baseMainFrame events.
        void OnClose( wxCloseEvent& event );
		void OnFileNew( wxCommandEvent& event );
		void OnFileOpen( wxCommandEvent& event );
		void OnFileSave( wxCommandEvent& event );
		void OnFileSaveAs( wxCommandEvent& event );
		void OnFilePrint( wxCommandEvent& event );
		void OnFileExport( wxCommandEvent& event );
		void OnFileExit( wxCommandEvent& event );
		void OnToolsOptions( wxCommandEvent& event );
		void OnHelpContents( wxCommandEvent& event );
		void OnHelpContext( wxCommandEvent& event );
		void OnHelpUpdate( wxCommandEvent& event );
		void OnHelpAbout( wxCommandEvent& event );
	public:
		/** Constructor */
		MainFrame( wxWindow* parent );
	//// end generated class members

};

#endif // __MainFrame__