#ifndef CPSC131_PALINDROMEDETECTOR_MYQUEUE_HPP
#define CPSC131_PALINDROMEDETECTOR_MYQUEUE_HPP


/**
 * TODO: Complete this class declaration
 */


/// Starter includes
#include "MyQueue.hpp"
#include "MyStack.hpp"
//
#include <string>


//
namespace CPSC131::PalindromeDetector
{
	//
	class MyDetector
	{
		//
		public:
			
			///	Your welcome
			MyDetector();
			
			/**
			 * Receive an std::string
			 * 
			 * Return true if the string is a palindrome
			 * Return false otherwise
			 */
			bool isPalindrome(std::string s); {

			s.erase (std::remove_if (s.begin(), s.end(), [](char c) {return !std::isalpha(c);}), s.end());

			std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {return std::tolower(c); });

			MyStack<char> stack;

			int i, len = s.length();

			for (i = 0; i < len/2; i++){

				stack.push(s[i]);
			}
			
			if (len % 2 != 0){

				i++;
			}

			for (; i < len; i++){

				if (stack.top() != s[i]){

					return false;
				}

				stack.pop();
			}

			return true;

			}
		//
		private:
			
			// ???
	};
}









#endif
