import requests
import BeautifulSoup

def main():
	URL="https://propakistani.pk/"
	try:
		status=requests.get(URL)
		if status.status_code == 200:
			
	else:
		print 'Website incorrect.'
	except:
		print 'Request failed!'
if __name__=="__main__":
	main()
